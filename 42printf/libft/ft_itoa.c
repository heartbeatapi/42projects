/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:10:16 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/22 16:51:44 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_digitcount(long num)
{
	size_t	track;

	track = 1;
	while (num >= 10)
	{
		if (num < 10)
			return (track);
		num = num / 10;
		track++;
	}
	return (track);
}

static char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len - 1)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}

static char	*ft_itoanegative(long long num)
{
	long	temp;
	char	*dest;
	size_t	i;
	size_t	negmalloc;

	num = -num;
	negmalloc = ft_digitcount(num);
	dest = malloc((negmalloc + 2) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < negmalloc)
	{
		temp = num % 10;
		num = num / 10;
		dest[i] = temp + '0';
		i++;
	}
	dest[i] = '-';
	i++;
	dest[i] = '\0';
	return (ft_strrev(dest));
}

char	*ft_itoa(int n)
{
	long long	num;
	long long	temp;
	char		*dest;
	size_t		i;
	size_t		posmalloc;

	num = n;
	if (num < 0)
		return (ft_itoanegative(num));
	posmalloc = ft_digitcount(num);
	dest = malloc((posmalloc + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < posmalloc)
	{
		temp = num % 10;
		num = num / 10;
		dest[i] = temp + '0';
		i++;
	}
	dest[i] = '\0';
	return (ft_strrev(dest));
}

/*#include <stdio.h>

int	main()
{
	printf("%s%s\n", "itoa output: ", ft_itoa(-123156));
	printf("%s%s\n", "itoa INT_MIN output: ", ft_itoa(-2147483648));
	return (0);
}*/