/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:53:36 by jbach             #+#    #+#             */
/*   Updated: 2021/12/03 14:53:38 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newl;

	newl = malloc(sizeof(t_list));
	if (!newl)
		return (NULL);
	if (newl)
	{
		newl -> content = content;
		newl -> next = NULL;
	}
	return (newl);
}
