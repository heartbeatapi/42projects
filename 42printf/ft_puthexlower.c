/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:33:52 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/07 14:21:11 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stddef.h>

long long	ft_baselenl(const char *base)
{
	long long	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_hexl(unsigned int num, const char *base)
{
	long long	len;
	long long	count;
	long long	temp;

	count = 0;
	len = ft_baselenl(base);
	if (num >= len)
	{
		temp = ft_hexl(num / len, base);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (write(1, &base[num % len], 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_puthexlower(va_list arg)
{
	unsigned int	num;

	num = (unsigned int)va_arg(arg, unsigned int);
	return (ft_hexl(num, "0123456789abcdef"));
}
