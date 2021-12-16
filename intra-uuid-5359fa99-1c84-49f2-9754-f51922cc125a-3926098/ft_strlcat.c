/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:39:19 by jbach             #+#    #+#             */
/*   Updated: 2021/11/25 13:39:22 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	index_dst;

	i = 0;
	index_dst = 0;
	while (dst[index_dst] != '\0' && index_dst < dstsize)
		index_dst++;
	while (src[i] != '\0' && (index_dst + i + 1) < dstsize)
	{
		dst[index_dst + i] = src[i];
		i++;
	}
	if (index_dst < dstsize)
		dst[index_dst + i] = 0;
	return (ft_strlen(src) + index_dst);
}
