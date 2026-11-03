/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 14:52:57 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/03 12:09:43 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_format_specifier(const char *s, va_list arg, long long i);
int	ft_putchar(va_list arg);
int	ft_putstr(va_list arg);
int	ft_putadd(va_list arg);
int	ft_putnbr(va_list arg);
int	ft_putunsign(va_list arg);
int	ft_puthexlower(va_list arg);
int	ft_puthexupper(va_list arg);

#endif