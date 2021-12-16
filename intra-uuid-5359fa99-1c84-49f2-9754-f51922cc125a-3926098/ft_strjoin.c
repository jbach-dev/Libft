/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:46:28 by jbach             #+#    #+#             */
/*   Updated: 2021/11/29 15:00:44 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*join(char const *s1, char const *s2, char *result)
{
	size_t	i;
	size_t	index;

	i = 0;
	index = 0;
	while (i < ft_strlen(s1) && s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
		index++;
	}
	i = 0;
	while (i < ft_strlen(s2) && s2[i] != '\0')
	{
		result[index] = s2[i];
		i++;
		index++;
	}
	result[index] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		result = (char *) s2;
		return (result);
	}
	if (!s2)
	{
		result = (char *) s1;
		return (result);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(*s1) * (len + 1));
	if (!result)
		return (NULL);
	result = join(s1, s2, result);
	return (result);
}
