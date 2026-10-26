/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:07:27 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/19 12:13:09 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dst_len);
}

/*#include <stdio.h>
#include <string.h>

int    main()
{
    char s1[30] = "Hello";
    char s2[30] = "Hello";

    printf("%zu\n", strlcat(s1, "World!", 12));
    printf("%s\n", s1);
    printf("%zu\n", ft_strlcat(s2, "World!", 12));
    printf("%s\n", s2);
    return (0);
}*/