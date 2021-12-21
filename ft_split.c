/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:00:51 by jbach             #+#    #+#             */
/*   Updated: 2021/11/29 15:00:53 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	size_t	carac;
	size_t	i;

	carac = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			carac++;
			i++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == c)
			i++;
	}
	return (carac);
}

static char	**split(char **result, char const *s, char c, size_t index)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && i <= ft_strlen(s))
	{
		while (s[i] != c && s[i])
		{
			i++;
			index++;
		}
		if (i > i - index)
		{
			result[j] = ft_substr(s, i - index, index);
			j++;
		}
		while (s[i] == c)
		{
			index = 0;
			i++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index;

	index = 0;
	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!result)
		return (NULL);
	result = split(result, s, c, index);
	return (result);
}
