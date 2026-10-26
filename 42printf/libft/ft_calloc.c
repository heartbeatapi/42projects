/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:56:42 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 15:11:27 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>
//#include <strings.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*nullstr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	nullstr = malloc(nmemb * size);
	if (nullstr == NULL)
		return (NULL);
	ft_bzero(nullstr, (nmemb * size));
	return (nullstr);
}

/*#include <stdio.h>

int	main()
{
	int	*arr = ft_calloc(5, sizeof(int));
	int	*arr2 = calloc(5, sizeof(int));
	
	printf("%s%d\n", "ft_calloc output: ", arr[3]);
	printf("%s%d\n", "man_calloc output: ", arr2[3]);
	return (0);
}*/