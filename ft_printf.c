/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:45 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/10 11:58:13 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	conversion(const char *str, va_list list, int i)
{
	if (str[i] == 'c')
		return (ft_putchrp(va_arg(list, int)));
	if (str[i] == 's')
		return (ft_putstrp(va_arg(list, const char *)));
	if (str[i] == 'd' || str[i] == 'i')
		return (ft_put_i(va_arg(list, int)));
	if (str[i] == 'p')
		return (ft_printp(va_arg(list, void *)));
	if (str[i] == 'x')
		return (ft_print_x(va_arg(list, unsigned int)));
	if (str[i] == 'X')
		return (ft_print_x_up(va_arg(list, unsigned int)));
	if (str[i] == 'u')
		return (ft_print_u(va_arg(list, unsigned int)));
	if (str[i] == '%')
		return (ft_putchrp('%'));
	return (-1);
}

int	ft_check(const char	*str, va_list list)
{
	int	length;
	int	i;
	int	ret;

	length = 0;
	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			length = conversion(str, list, (i + 1));
			i++;
		}
		else
			length = ft_putchrp(str[i]);
		if (length == -1)
			return (-1);
		i++;
		ret += length;
	}
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		ret;

	ret = 0;
	if (!str)
		return (-1);
	va_start(list, str);
	ret = ft_check(str, list);
	va_end(list);
	return (ret);
}

// int	main()
// {
// 	char		c;
// 	const char	*arr;
// 	int			d;
// 	void		*p;

// 	c = 'a';
// 	arr = "hjghtetertrkltdk";
// 	d = (int) NULL;
// 	p = NULL;
// 	printf("mijne: %d\n", ft_printf("ba lab %d ", d));
// 	// printf("\nechte: %d\n", printf(NULL));
// 	return (0);
// }
