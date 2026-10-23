/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:47:54 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 20:33:18 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	del(void *content)
{
	free(content);
	return ;
}*/

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

/*void	*ft_42(void *content)
{
	int *numnum;

	numnum = (int *)content;
	*numnum = 42;
	return (numnum);
}

int main()
{
	#include <stdio.h>
    t_list *helpnode;
    t_list *current;
	t_list *temp;
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	*a = 1;
	*b = 2;
	*c = 3;
    
    current = malloc(sizeof(t_list));
    (*current).content = a;

    (*current)next = malloc(sizeof(t_list));
    (*current).next.content = b;

    (*current).next.next = malloc(sizeof(t_list));
    (*current).next.next.content = c;

    (*current).next.next.next = NULL;

    helpnode = current;
	temp = current;

	while (helpnode != NULL)
	{
		printf ("%d\n", *(int *)helpnode->content);
		helpnode = helpnode->next;
	}
	temp = ft_lstmap(temp, ft_42, del);
	while (temp != NULL)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
    return (0);
}*/