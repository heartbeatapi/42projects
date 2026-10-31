/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:19:06 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/31 14:13:41 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

//CHARACTER PRINT:
int	ft_printchar(va_list arg)
{
	char	c;

	c = (char)va_arg(arg, int);
	write(1, &c, 1);
	return (1);
}

//STRING PRINT:
int ft_printstr(va_list arg)
{
	char	*str;
	size_t	i;

	i = 0;
	str = va_arg(arg, char *);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

//LENGTH OF INTEGER:
static int	ft_nbrlen(int num)
{
	int	track;

	if (num < 0)
		num = -num;
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
//INTEGER PRINT:
static int	ft_putnbr(int num)
{
	int	count;
	int	track;

	track = ft_nbrlen(num);
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	write(1, &"0123456789"[num % 10], 1);
	return (count + track);
}
//INTEGER PRINT CALL:
int	ft_printint(va_list arg)
{
	long long	num;

	num = va_arg(arg, int);
	return (ft_putnbr(num));
}
//IDENTIFYING FORMAT SPECIFIER:
int	ft_format_specifier(const char *s, va_list arg, size_t i)
{
	if (s[i] == 'c')
		return (ft_printchar(arg));
	if (s[i] == 's')
		return (ft_printstr(arg));
	if (s[i] == 'd')
		return (ft_printint(arg));
	return (0);
}
//FINDING FORMAT SPECIFIER, OTHERWISE PRINT IMMUTABLE STRING:
int	ft_printf(const char *s, ...)
{
	size_t		i;
	long long	count;
	va_list		arg;

	va_start(arg, s);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_format_specifier(s, arg, i);
		}	
		else
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}

//TEST MAIN:
#include <stdio.h>

int	main()
{
	printf("total chars: %d\n",
		ft_printf("The %s is the newest Generation %d MBT of %s\n", "Leopard 2A8", 3, "Germany."));
	return (0);
}