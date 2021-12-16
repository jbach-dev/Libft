/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:42:09 by jbach             #+#    #+#             */
/*   Updated: 2021/11/26 12:42:10 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	good_occurence;
	char	*occurence_haystack;
	char	*occurence_needle;

	occurence_haystack = (char *)haystack;
	occurence_needle = (char *)needle;
	i = 0;
	good_occurence = 0;
	if (needle[0] == '\0')
		return (occurence_haystack);
	while (i < len)
	{
		if (ft_strncmp(&occurence_haystack[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len || haystack[0] == '\0')
				return (NULL);
			good_occurence = i;
			return (occurence_haystack + good_occurence);
		}
		i++;
	}
	return (NULL);
}
