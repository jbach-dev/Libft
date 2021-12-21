/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:09:04 by jbach             #+#    #+#             */
/*   Updated: 2021/11/26 12:09:09 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*pointer1;
	unsigned char		*pointer2;
	size_t				i;

	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (pointer1[i] != pointer2[i])
			return (pointer1[i] - pointer2[i]);
		i++;
	}
	return (0);
}
