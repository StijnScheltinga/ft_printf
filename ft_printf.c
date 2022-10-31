/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:06:45 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/31 17:29:07 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	conversion(const char *str, va_list list, int i)
{
	int	j;

	j = 0;
	if (str[i] == 'c')
		j += ft_putchrp(va_arg(list, int));
	if (str[i] == 's')
		j += ft_putstrp(va_arg(list, const char *));
	if (str[i] == 'd' || str[i] == 'i')
		j += ft_put_i(va_arg(list, int));
	if (str[i] == 'p')
		j += ft_printp(va_arg(list, void *));
	if (str[i] == 'x')
		j += ft_print_x(va_arg(list, unsigned int));
	if (str[i] == 'X')
		j += ft_print_x_up(va_arg(list, unsigned int));
	return (j);
}

//main function
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
			length--;
			i++;
		}
		else
			ft_putchrp(str[i]);
		i++;
	}
	va_end(list);
	return (length + i);
}

int	main()
{
	char		c;
	const char	*arr;
	int			d;
	void		*p;

	c = 'A';
	arr = "hjghtetertrkltdk";
	d = 214746;
	p = &c;
	printf("mijne: %d\n", ft_printf("char: %X char: %i\n", d, d));
	printf("echte: %d\n", printf("char: %X char: %i\n", d, d));
	return (0);
}
