/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:33 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/21 17:58:53 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strrchr(set, s1[j]))
		j--;
	ret = ft_substr(s1, i, j - i + 1);
	return (ret);
}

// int main()
// {
// 	printf("%s", ft_strtrim("halloNoheEhalko", "laho"));
// }