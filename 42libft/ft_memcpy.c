/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:25:40 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/21 12:20:32 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*srcstr;
	unsigned char		*deststr;
	size_t				i;

	srcstr = (unsigned const char *) src;
	deststr = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		deststr[i] = srcstr[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	unsigned const char src[20] = "hello ";
	unsigned char		dest[20] = "Reaver";

	printf("%s", (unsigned char *) ft_memcpy(dest, src, 4));
	return (0);
}*/