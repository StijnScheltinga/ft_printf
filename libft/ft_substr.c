/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:10:27 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/25 15:01:36 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fstring(char const *s, unsigned int start, size_t len, char *ret)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (j < len && i >= start)
		{
			ret[j] = s[i];
			j++;
		}
		i++;
	}
	ret[j] = '\0';
	return (ret);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	return (fstring(s, start, len, ret));
}

// int main()
// {
// 	printf("%s", ft_substr("hallohoi", 3, 2));
// }
