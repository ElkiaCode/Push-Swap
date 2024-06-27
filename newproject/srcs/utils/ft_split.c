/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:06:37 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/18 13:36:50 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*dest;

	j = 0;
	i = 0;
	while (s[j])
		j++;
	dest = (char *)malloc(sizeof(char) * j + 1);
	while (i < j)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

static void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = (char *)malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, nmemb * size);
	return (str);
}

static char	**ft_splitwords(char const *s, size_t x, size_t words)
{
	size_t	i;
	size_t	j;
	char	**str;

	i = 0;
	j = 0;
	str = ft_calloc((words + 1), (sizeof(char *)));
	if (s[i] != '\0')
		str[j++] = ft_strdup(&s[i]);
	while (i++ < x)
	{
		if (s[i] != '\0' && s[i - 1] == '\0')
			str[j++] = ft_strdup(&s[i]);
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	size_t	x;
	char	*str;
	char	**endresult;

	if (!s)
		return (NULL);
	x = ft_strlen(s);
	i = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (i < x)
	{
		if (str[i] == c)
			str[i] = '\0';
		i++;
	}
	words = ft_countwords(s, c);
	endresult = ft_splitwords(str, x, words);
	free(str);
	return (endresult);
}
