/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:02:31 by jbach             #+#    #+#             */
/*   Updated: 2021/11/26 17:02:32 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*src;
	char		*cpy;
	size_t		i;
	size_t		len;

	src = (char *)s1;
	cpy = NULL;
	len = ft_strlen(src);
	i = 0;
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (0);
	while (src[i] != '\0' && i < len)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
