/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:16:23 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/22 16:34:01 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int	main()
{
	int s[4] = {1, 2, 3, 4};
	int	x[4] = {1, 2, 3, 4};
	
	ft_bzero(s, 16);
	printf("%s%d\n", "ft_bzero output: ", s[3]);
	bzero(x,16);
	printf("%s%d\n", "man_bzero output: ", x[3]);
	return (0);
}*/