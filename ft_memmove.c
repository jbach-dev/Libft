/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <jbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:19:21 by jbach             #+#    #+#             */
/*   Updated: 2021/11/24 14:08:42 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	char		*source;
	size_t		i;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	if (source > destination)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	i = len;
	if (source < destination)
	{
		while (i > 0)
		{
			destination[i - 1] = source[i - 1];
			i--;
		}
	}
	return (destination);
}
