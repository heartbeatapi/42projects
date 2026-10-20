/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:21:25 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/20 15:27:24 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*ft_free_all(char	**result, size_t j)
{
	while (0 < j)
	{
		j--;
		free(result[j]);
	}
	free(result);
	return (NULL);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_alloc_word(char const *s, char c, size_t start)
{
	size_t	end;

	end = 0;
	while (s[start + end] != '\0' && s[start + end] != c)
		end++;
	return (ft_substr(s, (unsigned int) start, end));
}

static char	**ft_fill_words(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		in_word;

	i = 0;
	j = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			result[j] = ft_alloc_word(s, c, i);
			if (result[j] == NULL)
				return (ft_free_all(result, j));
			j++;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (ft_fill_words(result, s, c));
}

/*#include <stdio.h>

int	main()
{
	size_t	j;
	char const	*str = "Into the Fires of Battle, unto the Anvil of War!";
	char	**result = ft_split(str, ' ');
	
	j = 0;
	while (result[j] != NULL)
	{
		printf("%s", result[j]);
		j++;
	}
	return (0);
}*/