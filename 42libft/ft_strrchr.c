/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:21:56 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/23 09:37:57 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == (unsigned char) c)
		return ((char *) &s[i]);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s%s\n", "ft_strrchr output: ",
		 ft_strrchr("Arsenal Bird", 'B'));
	printf("%s%s\n", "man_strrchr output: ",
		 strrchr("Arsenal Bird", 'B'));
	return (0);
}*/