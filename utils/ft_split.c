/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cparodi <cparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:06:37 by cparodi           #+#    #+#             */
/*   Updated: 2024/06/14 15:35:50 by cparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

int	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			result++;
		i++;
	}
	return (result);
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
