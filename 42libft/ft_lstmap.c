/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:47:54 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/24 02:12:08 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	t_list	*new_list;
	void	*new_content;

	new_list = NULL;
	current = lst;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (current != NULL)
	{
		new_content = f((*current).content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current = (*current).next;
	}
	return (new_list);
}
