/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:19:06 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/27 15:40:16 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_printf(const char *, ...)
{
	check format specifier: cspdiuxX%
	call print function if one of the format specifier matches.
	check next format specifier and repeat until there are no more.

	if no format specifier is present, check if it is a string literal.
	if it is string literal, print it

	use strlen to find out total number of characters that were printed.
	finally return total number of characters that were printed.
	can use itoa to convert integers to characters and return the result.
}