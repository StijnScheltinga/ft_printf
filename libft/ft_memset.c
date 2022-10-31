/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:06:05 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/24 11:21:42 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t len)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) str;
	while (i < len)
	{
		*p = (unsigned char) a;
		p++;
		i++;
	}
	return (str);
}
