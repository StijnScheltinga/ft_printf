/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:48:15 by sschelti          #+#    #+#             */
/*   Updated: 2022/11/01 13:47:09 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int n)
{
	const char	*str;
	int			len;

	str = ft_itoa_u(n);
	len = ft_strlen(str);
	write(1, str, len);
	free ((void *) str);
	return (len);
}
