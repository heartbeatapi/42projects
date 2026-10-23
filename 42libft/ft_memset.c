/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:33:32 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:16:07 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	unsigned char	*test;
	unsigned char	*test2;
	unsigned char	ptr[20];
	unsigned char	ptr2[20]
	
	test = (unsigned char *) ft_memset(ptr, 'a', 10);
	printf("%s%s\n", "ft_memset output: ", test);
	test2 = (unsigned char *) memset(ptr2, 'a', 10);
	printf("%s%s\n", "man_memset output: ", test2);
	return (0);
}*/