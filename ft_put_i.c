/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:44:36 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/31 17:28:08 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_i(int n)
{
	const char	*str;
	int			len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	write(1, str, len);
	return (len - 1);
}
