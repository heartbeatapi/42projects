/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:19:06 by davatanz          #+#    #+#             */
/*   Updated: 2026/10/31 18:02:54 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
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

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

//LENGTH OF INTEGER:
static int	ft_nbrlen(long long num)
{
	int	track;

	if (num < 0)
		num = -num;
	track = 1;
	while (num >= 10)
	{
		num = num / 10;
		track++;
	}
	return (track);
}
//INTEGER PRINT:
static int	ft_putnbr(long long num)
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
		ft_putnbr(num / 10);
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

static int	ft_nbrunsignlen(unsigned int num)
{
	int	track;

	track = 1;
	while (num >= 10)
	{
		num = num / 10;
		track++;
	}
	return (track);
}

//UNSIGNED INTEGER PRINT:
static int ft_putunsignnbr(unsigned int num)
{
	int	track;
	
	track = ft_nbrunsignlen(num);
	if (num >= 10)
		ft_putunsignnbr(num / 10);
	write (1, &"0123456789"[num % 10], 1);
	return (track);
}

//UNSIGNED INTEGER PRINT CALL:
int	ft_printunsignint(va_list arg)
{
	long long num;

	num = (unsigned int)va_arg(arg, unsigned int);
	return (ft_putunsignnbr(num));
}

//UNSIGNED INTEGER ADDRESS:
int	ft_printvoidptr(va_list arg)
{
	long long add;

	add = (uintptr_t)va_arg(arg, unsigned int);
	write(1, "0x", 2);
	return (ft_putunsignnbr(add) + 2);
}

int	ft_printlowbase(va_list arg);
{
}

//IDENTIFYING FORMAT SPECIFIER:
int	ft_format_specifier(const char *s, va_list arg, size_t i)
{
	if (s[i] == 'c')
		return (ft_printchar(arg));
	if (s[i] == 's')
		return (ft_printstr(arg));
	if (s[i] == 'd' || s[i] == 'i')
		return (ft_printint(arg));
	if (s[i] == 'u')
		return (ft_printunsignint(arg));
	if (s[i] == '%')
	{
		write(1, "%%", 1);
		return (1);
	}
	if (s[i] == 'p')
		return (ft_printvoidptr(arg));
	if (s[i] == 'x')
		return (ft_printlowbase(arg));
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
		ft_printf("The Soviet %s%d %s was the fastest operational %s of all time. It's top speed was %s%d,%d which translates to roughly %d km/h.\n", "MiG-", 25, "Foxbat", "Interceptor", "Mach ", 2, 83, 3000));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The %s is the newest Generation %d MBT from %s.\n", "Leopard 2A8", 3, "Germany"));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The %s T-%u MBT, has a gun depression of %d degrees.\n", "Russian", 80, -5));
	printf("\n");
	printf("total chars: %d\n",
		ft_printf("The address of the string %s is %p.\n", "Foxhound", "Foxhound"));
	return (0);
}