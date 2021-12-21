/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:14:42 by jbach             #+#    #+#             */
/*   Updated: 2021/11/26 16:14:45 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointeur;
	size_t	memory;

	memory = count * size;
	pointeur = malloc(memory);
	if (!pointeur)
		return (0);
	ft_bzero(pointeur, memory);
	return (pointeur);
}
