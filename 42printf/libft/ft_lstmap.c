/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:47:54 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/25 13:24:28 by davatanz         ###   ########.fr       */
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

/*#include <stdio.h>
#include <stdlib.h>

void	*ft_function(void *content)
{
	int	*numnum;

	numnum = malloc(sizeof(int));
	if (numnum == NULL)
		return (NULL);
	*numnum = *(int *)content * 2;
	return (numnum);
}

void	ft_del(void *content)
{
	free(content);
}

void	ft_print(void *content)
{
	if (content != NULL)
		printf("%d\n", *(int *)content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*mapped;
	t_list	*last;
	t_list	*node;
	int		*n1;
	int		*n2;
	int		*n3;
	int		*n4;

	lst = NULL;
	mapped = NULL;
	node = NULL;
	n1 = malloc(sizeof(int));
	n2 = malloc(sizeof(int));
	n3 = malloc(sizeof(int));
	n4 = malloc(sizeof(int));
	if (n1 == NULL || n2 == NULL || n3 == NULL || n4 == NULL)
	{
		free(n1);
		free(n2);
		free(n3);
		free(n4);
		return (1);
	}
	*n1 = 10;
	*n2 = 20;
	*n3 = 30;
	*n4 = 5;
	node = ft_lstnew(n1);
	if (node == NULL)
		return (free(n1), free(n2), free(n3), free(n4), 1);
	ft_lstadd_front(&lst, node);
	node = ft_lstnew(n2);
	if (node == NULL)
		return (free(n2), free(n3), free(n4), ft_lstclear(&lst, ft_del), 1);
	ft_lstadd_back(&lst, node);
	node = ft_lstnew(n3);
	if (node == NULL)
		return (free(n3), free(n4), ft_lstclear(&lst, ft_del), 1);
	ft_lstadd_back(&lst, node);
	printf("old list:\n");
	ft_lstiter(lst, ft_print);
	printf("size: %d\n", ft_lstsize(lst));
	last = ft_lstlast(lst);
	if (last != NULL)
		printf("last node: %d\n", *(int *)(*last).content);
	node = ft_lstnew(n4);
	if (node == NULL)
		return (free(n4), ft_lstclear(&lst, ft_del), 1);
	ft_lstdelone(node, ft_del);
	mapped = ft_lstmap(lst, ft_function, ft_del);
	if (mapped == NULL)
	{
		ft_lstclear(&lst, ft_del);
		return (1);
	}
	printf("new list:\n");
	ft_lstiter(mapped, ft_print);
	ft_lstclear(&lst, ft_del);
	ft_lstclear(&mapped, ft_del);
	return (0);
}*/