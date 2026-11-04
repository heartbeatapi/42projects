/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatcheck.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 13:58:05 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/04 12:00:04 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

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
	if (s[i] == 'u')
		return (ft_putunsign(arg));
	if (s[i] == 'x')
		return (ft_puthexlower(arg));
	if (s[i] == 'X')
		return (ft_puthexupper(arg));
	if (s[i] == '%')
	{
		if (write(1, "%", 1) == -1)
			return (-1);
		return (1);
	}
	return (0);
}
