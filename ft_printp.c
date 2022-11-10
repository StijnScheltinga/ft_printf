/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:02:55 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/08 20:17:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

static	void	fillstring(unsigned long a, int size, char *hex)
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

int	ft_printp(void *p)
{
	unsigned long	a;
	char			*hex;
	int				size;
	int				err;

	if (!p)
		return (ft_putstrp("0x0"));
	a = (unsigned long) p;
	size = ft_size(a);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (-1);
	err = write(1, "0x", 2);
	if (err == -1)
	{
		free(hex);
		return (-1);
	}
	fillstring(a, size, hex);
	size = ft_putstrp((const char *) hex);
	free (hex);
	if (size == -1)
		return (-1);
	return (size + 2);
}
