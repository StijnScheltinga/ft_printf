/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:08:57 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/08 20:09:26 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_size(unsigned long a)
{	
	unsigned int	size;

	size = 0;
	while (a >= 1)
	{
		a /= 16;
		size++;
	}
	return (size);
}

static	void	fillstring(unsigned long a, unsigned int size, char *hex)
{
	hex[size] = '\0';
	size--;
	while (a >= 1 && size >= 0)
	{
		if ((a % 16) > 9)
			hex[size] = (a % 16) + 87;
		else
			hex[size] = (a % 16) + '0';
		a = a / 16;
		size--;
	}
}

int	ft_print_x(unsigned int i)
{
	char			*hex;
	unsigned int	size;

	if (i == 0)
		return (ft_putchrp('0'));
	size = ft_size(i);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (-1);
	fillstring(i, size, hex);
	size = ft_putstrp((const char *) hex);
	free (hex);
	return (size);
}
