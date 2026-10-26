/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 09:45:50 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/22 16:41:55 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main()
{
	printf("%s%d\n", "ft_isalnum output: ", ft_isalnum('A'));
	printf("%s%d\n", "man_isalnum output: ", isalnum('A'));
	return (0);
}*/