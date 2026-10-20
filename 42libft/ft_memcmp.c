/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:03:14 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/05 11:21:57 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1c;
	unsigned const char	*s2c;
	size_t				i;

	if (n == 0)
		return (0);
	s1c = (unsigned const char *) s1;
	s2c = (unsigned const char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] > s2c[i])
			return (s1c[i] - s2c[i]);
		else if (s1c[i] < s2c[i])
			return (s1c[i] - s2c[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	printf("%d", ft_memcmp("hello houseman", "hello ~reeman", 20));
	return (0);
}*/