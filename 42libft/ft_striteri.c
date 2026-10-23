/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:46:31 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:31:14 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int) i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_func(unsigned int i, char *c) 
{ 
	i = 0;
	*c = *c - 32;
}

int	main(void)
{
	char	s[] = "hello world";

	printf("before: %s\n", s);
	ft_striteri(s, ft_func);
	printf("after:  %s\n", s);
	return (0);
}*/