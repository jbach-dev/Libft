/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:07:25 by jbach             #+#    #+#             */
/*   Updated: 2021/11/25 15:07:28 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		value;
	char		*final_value;
	size_t		i;

	i = 0;
	value = (char)c;
	final_value = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == value)
			return (final_value + i);
		i++;
	}
	if (c == '\0')
		return (&(final_value[ft_strlen(final_value)]));
	return (0);
}
