/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:40:02 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/01 13:46:23 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	sizeint(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*fillstring(char *str, unsigned int value, int size)
{
	if (value == 0)
	{
		str[size] = value + 48;
		size--;
	}
	while (value >= 1)
	{
		str[size] = (value % 10) + 48;
		value /= 10;
		size--;
	}
	return (str);
}

char	*ft_itoa_u(unsigned int n)
{
	char			*str;
	int				size;

	size = 0;
	size += sizeint(n);
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (str);
	str[size] = '\0';
	size--;
	return (fillstring(str, n, size));
}
