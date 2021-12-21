/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:10:24 by jbach             #+#    #+#             */
/*   Updated: 2021/11/24 15:58:58 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*destination;
	char	*source;
	size_t	i;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	if (!dstsize)
		return (ft_strlen(src));
	while (source[i] != '\0' && i < (dstsize - 1))
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = 0;
	return (ft_strlen(src));
}
