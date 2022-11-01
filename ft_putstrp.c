/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:57:55 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/01 11:00:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrp(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstrp("(null)"));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
