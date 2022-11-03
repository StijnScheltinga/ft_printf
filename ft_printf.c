/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:45 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/01 14:59:28 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	conversion(const char *str, va_list list, int i)
{
	int	length;

	length = 0;
	if (str[i] == 'c')
		length += ft_putchrp(va_arg(list, int));
	if (str[i] == 's')
		length += ft_putstrp(va_arg(list, const char *));
	if (str[i] == 'd' || str[i] == 'i')
		length += ft_put_i(va_arg(list, int));
	if (str[i] == 'p')
		length += ft_printp(va_arg(list, void *));
	if (str[i] == 'x')
		length += ft_print_x(va_arg(list, unsigned int));
	if (str[i] == 'X')
		length += ft_print_x_up(va_arg(list, unsigned int));
	if (str[i] == 'u')
		length += ft_print_u(va_arg(list, unsigned int));
	if (str[i] == '%')
		length += ft_putchrp('%');
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	list;

	i = 0;
	length = 0;
	if (!str)
		return (0);
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += conversion(str, list, (i + 1));
			i++;
		}
		else
			length += ft_putchrp(str[i]);
		if (str[i] != '\0')
			i++;
	}
	va_end(list);
	return (length);
}

// int	main()
// {
// 	char		c;
// 	const char	*arr;
// 	int			d;
// 	void		*p;

// 	c = 'a';
// 	arr = "hjghtetertrkltdk";
// 	d = -22;
// 	p = NULL;
// 	printf("mijne: %d\n", ft_printf("hello%"));
// 	// printf("echte: %d\n", printf("hello%"));
// 	return (0);
// }
