/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:30:51 by jbach             #+#    #+#             */
/*   Updated: 2021/11/25 16:30:52 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		value;
	char		*final_value;
	size_t		i;
	char		*source;

	i = 0;
	value = (char)c;
	final_value = NULL;
	source = (char *)s;
	while (source[i] != '\0')
	{
		if (source[i] == value)
			final_value = &source[i];
		i++;
	}
	if (c == '\0')
		return (&(source[i]));
	return (final_value);
}
