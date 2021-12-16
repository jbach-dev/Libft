/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:01:34 by jbach             #+#    #+#             */
/*   Updated: 2021/11/23 15:01:36 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*source;
	size_t	i;

	i = 0;
	source = (char *)b;
	while (i < len)
	{
		source[i] = (char)c;
		i++;
	}
	return (b);
}
