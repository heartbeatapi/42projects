/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:18:33 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:10:29 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <string.h>

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
	
	printf("%s%s\n", "ft_memmove output: ",
	 (unsigned char *) ft_memmove(dest + 2, "Flanker-H", 4));
	printf("%s%s\n", "man_memmove output: ",
	 (unsigned char *) memmove(dest + 2, "Flanker-H", 4));
	return (0);
}*/