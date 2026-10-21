/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:05:12 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/21 14:16:27 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	current = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*current).next != NULL)
	{
		current = (*current).next;
	}
	(*current).next = new;
}
