/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:58:05 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/01 19:39:35 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_specifier(const char *s, va_list arg, long long i)
{
	if (s[i] == 'c')
		return (ft_putchar(arg));
	if (s[i] == 's')
		return (ft_putstr(arg));
	if (s[i] == 'p')
		return (ft_putadd(arg));
	if (s[i] == 'd' || s[i] == 'i')
		return (ft_putnbr(arg));
	return (0);
}