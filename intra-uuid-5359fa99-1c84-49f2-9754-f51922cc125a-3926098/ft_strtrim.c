/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:34:45 by jbach             #+#    #+#             */
/*   Updated: 2021/11/29 12:34:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	match(char charactere, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == charactere)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	last_position;
	size_t	first_position;
	size_t	len_total;
	char	*trim_cpy;

	if (!s1 || !set)
		return (NULL);
	last_position = ft_strlen(s1);
	first_position = 0;
	while (match(s1[first_position], set))
		first_position++;
	while (match(s1[last_position - 1], set) && first_position < last_position)
		last_position--;
	len_total = last_position - first_position;
	trim_cpy = ft_substr(s1, first_position, len_total);
	return (trim_cpy);
}
