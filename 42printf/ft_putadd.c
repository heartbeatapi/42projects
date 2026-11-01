/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 17:43:28 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/01 19:58:07 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
#include <unistd.h>

int	ft_baselen(char *base)
{
	long long	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_tohex(unsigned long long num, char *base)
{
	unsigned long long	len;
	long long			count;

	count = 0;
	len = ft_baselen(base);
	if (num >= len)
	{
		count += ft_tohex(num / len, base);
	}
	if (write(1, &base[num % len], 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_putadd(va_list arg)
{
	unsigned long long	add;
	long long			temp;

	add = (uintptr_t)va_arg(arg, void *);
	if (write(1, "0x", 2) == -1)
		return (-1);
	temp = ft_tohex(add, "0123456789abcdef");
	if (temp == -1)
		return (-1);
	return (temp + 2);
}
