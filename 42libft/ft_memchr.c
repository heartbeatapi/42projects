/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:34:12 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/05 11:56:17 by davatanz         ###   ########.fr       */
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

int	main()
{
	printf("%s", (unsigned const char *) ft_memchr("Hello Schmello", 'x', 7));
	return (0);
}*/