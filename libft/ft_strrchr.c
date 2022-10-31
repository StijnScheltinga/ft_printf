/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:17:22 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/21 16:27:34 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;

	i = ft_strlen((char *) str);
	while (i >= 0)
	{
		if (str[i] == (char) ch)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "dhdskkljfhafaipjfa\0ksfja";
//     printf("%s", ft_strrchr(str, '\0'));
// }
