/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:07:12 by jbach             #+#    #+#             */
/*   Updated: 2021/11/24 13:56:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	if (!source && !destination)
		return (0);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
