/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:19:06 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/07 14:24:12 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>
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

//INTEGER PRINT:
static int	ft_putnbr(long long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
	count++;
	return (count);
}
//INTEGER PRINT CALL:
int	ft_printint(va_list arg)
{
	long long	num;

	num = va_arg(arg, int);
	return (ft_putnbr(num));
}

//UNSIGNED INTEGER PRINT:
static int ft_putunsignnbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putunsignnbr(num / 10);
	write (1, &"0123456789"[num % 10], 1);
	count++;
	return (count);
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

//LENGTH OF BASE
int	ft_baselen(const char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

//PUTNBRLOW CONVERSION:
int	ft_convputbaselow(unsigned int num, const char *base)
{
	int		len;
	int		count;

	count = 0;
	len = ft_baselen(base);
	if (num >= (unsigned int) len)
		count += ft_convputbaselow(num / len, base);
	write(1, &base[num % len], 1);
	count++;
	return (count);
}

//LOWERCASE BASE:
int	ft_putbaselow(va_list arg)
{
	long long	num;

	num = va_arg(arg, unsigned int);
	return (ft_convputbaselow(num, "0123456789abcdef"));
}

//PUTNBRUPPER CONVERSION:
int	ft_convputbaseupper(unsigned int num, const char *base)
{
	int	len;
	int	count;

	count = 0;
	len = ft_baselen(base);
	if (num >=  (unsigned int) len)
		count += ft_convputbaseupper(num / len, base);
	write(1, &base[num % len], 1);
	count++;
	return (count);
}

//UPPERCASE BASE:
int	ft_putbaseupper(va_list arg)
{
	long long	num;

	num = va_arg(arg, unsigned int);
	return (ft_convputbaseupper(num, "0123456789ABCDEF"));
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
		return (ft_putbaselow(arg));
	if (s[i] == 'X')
		return (ft_putbaseupper(arg));
	return (0);
}*/

#include "ft_printf.h"
#include <unistd.h>

//FINDING FORMAT SPECIFIER, OTHERWISE PRINT IMMUTABLE STRING:
int	ft_printf(const char *s, ...)
{
	long long	i;
	long long	count;
	long long	temp;
	va_list		arg;

	if (s == NULL)
		return (-1);
	va_start(arg, s);
	i = -1;
	count = 0;
	while (s[++i] != '\0')
	{
		if (s[i] == '%')
		{
			temp = ft_format_specifier(s, arg, ++i);
			if (temp == -1)
				return (va_end(arg), -1);
			count += temp;
		}
		else if (write(1, &s[i], 1) == -1)
			return (va_end(arg), -1);
		else
			count++;
	}
	return (va_end(arg), count);
}

/*#include <stdio.h>

int	main()
{
	printf("PUTCHAR TESTS:\n\n");
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 'M'));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 0));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", ' '));
	printf("\ntotal chars: %d\n",
		ft_printf("%c", 127));
}*/