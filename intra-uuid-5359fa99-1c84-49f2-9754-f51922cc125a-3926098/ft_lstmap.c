/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:00:47 by jbach             #+#    #+#             */
/*   Updated: 2021/12/06 13:00:48 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*lst_start;

	if (!lst || !f)
		return (NULL);
	lst_start = 0;
	while (lst)
	{
		lst_new = ft_lstnew(f(lst->content));
		if (!lst_new)
		{
			ft_lstclear(&lst_start, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_start, lst_new);
		lst = lst -> next;
	}
	return (lst_start);
}
