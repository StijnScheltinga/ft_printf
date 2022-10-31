/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:00:37 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/21 17:08:11 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) ch)
			return ((char *) str + i);
		i++;
	}
	if ((char) ch == '\0')
		return ((char *) str + i);
	return (NULL);
}

// int main()
// {
//     char str[] = "";
//     printf("%s", ft_strchr(str, '\0'));
// }
