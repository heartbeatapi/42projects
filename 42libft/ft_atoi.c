/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:35:16 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/22 16:27:39 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t		i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}

/*#include <stdio.h>

int	main()
{
	printf("%s%d\n", "positive ft_atoi output: ", ft_atoi("1523xad"));
	printf("%s%d\n", "negative ft_atoi output: ", ft_atoi("-1523xad"));
	printf("%s%d\n", "positive man_atoi output: ", atoi("1523xad"));
	printf("%s%d\n", "negative man_atoi output: ", atoi("-1523xad"));
	return (0);
}*/