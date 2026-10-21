/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:18:33 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/21 12:21:09 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	i = 0;
	if ((unsigned long long) d > (unsigned long long) s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
		return (dest);
	}
	else
		return (ft_memcpy(d, s, n));
}

/*#include <stdio.h>

int	main()
{
	char dest[] = "Hallo";
	
	printf("%s", (unsigned char *) ft_memmove(dest + 2, "Klaro", 4));
	return (0);
}*/