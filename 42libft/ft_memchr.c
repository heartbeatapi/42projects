/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:34:12 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/22 18:29:35 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*sc;
	size_t				i;

	sc = (unsigned const char *) s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char) c)
			return ((void *)&sc[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s%s\n", "ft_memchr output: ",
	 (unsigned const char *) ft_memchr("Adam Smasher", 'o', 7));
	printf("%s%s\n", "man_memchr output: ",
	 (unsigned const char *) memchr("Adam Smasher", 'o', 7));
	return (0);
}*/