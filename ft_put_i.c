/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:44:36 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/08 20:12:02 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_i(int n)
{
	const char	*str;
	int			len;
	int			err;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = ft_strlen(str);
	err = write(1, str, len);
	free ((void *) str);
	if (err == -1)
		return (-1);
	return (len);
}
