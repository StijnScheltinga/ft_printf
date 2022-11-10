/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:48:15 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/08 20:11:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	const char	*str;
	int			len;
	int			err;

	str = ft_itoa_u(n);
	if (!str)
		return (-1);
	len = ft_strlen(str);
	err = write(1, str, len);
	free ((void *) str);
	if (err == -1)
		return (-1);
	return (len);
}
