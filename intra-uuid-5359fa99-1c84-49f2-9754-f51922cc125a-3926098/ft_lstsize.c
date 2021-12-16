/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:07:04 by jbach             #+#    #+#             */
/*   Updated: 2021/12/06 11:07:05 by jbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*run_through;

	run_through = lst;
	size = 0;
	while (run_through)
	{
		run_through = run_through -> next;
		size++;
	}
	return (size);
}
