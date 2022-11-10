/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:58:36 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/08 17:53:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchrp(int a)
{
	unsigned char	c;
	int				err;

	c = (unsigned char) a;
	err = write(1, &c, 1);
	if (err == -1)
		return (-1);
	return (1);
}
