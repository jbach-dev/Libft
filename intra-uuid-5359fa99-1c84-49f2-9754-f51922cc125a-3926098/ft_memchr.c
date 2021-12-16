/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:43:40 by jbach             #+#    #+#             */
/*   Updated: 2021/11/25 18:43:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		value;
	char		*final_value;
	size_t		i;

	i = 0;
	value = (char)c;
	final_value = (char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (final_value[i] == value)
			return (final_value + i);
		i++;
	}
	if (c == '\0')
		return (&(final_value[ft_strlen(final_value)]));
	return (0);
}
