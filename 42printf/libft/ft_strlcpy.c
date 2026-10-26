/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:51:05 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:29:39 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char dst[20] = "Hello Houseman";
	
 	printf("%s%d\n", "ft_strlcpy output: ",
	 (int) ft_strlcpy(dst, "Houseman", 10));
	printf("%s%d\n"), "man_strlcpy output: ",
	 (int) strcpy(dst, "Houseman", 10));
	return (0);
}*/