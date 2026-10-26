/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:49:04 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:33:15 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		else if (s1[i] < s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s%d\n", "ft_strncmp output: ",
	 ft_strncmp("hello", "hel1o2323", 10));
	printf("%s%d\n", "man_strncmp output: ",
	 strncmp("hello", "hello2323", 10));
	return (0);
}*/