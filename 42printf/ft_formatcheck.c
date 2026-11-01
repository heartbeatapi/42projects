/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:58:05 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/01 14:55:32 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(const char *s, va_list arg, size_t i)
{
	if (s[i] == 'c')
		return (ft_putchar(arg));
	return (0);
}