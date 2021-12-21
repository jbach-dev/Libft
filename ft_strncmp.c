/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:16:59 by jbach             #+#    #+#             */
/*   Updated: 2021/11/25 17:17:00 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		*first;
	unsigned char		*second;
	size_t				i;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	i = 0;
	if ((s1[0] == '\0' && s2[0] == '\0') || n == 0)
		return (0);
	if (s1[0] == '\0')
		return (-1);
	while (i < n)
	{
		if (first[i] < second[i])
			return (-1);
		else if (first[i] > second[i])
			return (1);
		else if (first[i] == '\0' || second[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
