/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:28:54 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/20 17:36:18 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	count;
	
	count = 0;
	while (lst != NULL)
	{
		lst = (*lst).next;
		count++;
	}
	return ((unsigned int) count);
}
