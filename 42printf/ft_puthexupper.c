/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:54:45 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/03 11:58:59 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

long long	ft_baselenu(const char *base)
{
	long long	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_hexu(unsigned int num, const char *base)
{
	long long	len;
	long long	count;

	count = 0;
	len = ft_baselenu(base);
	if (num >= len)
		count += ft_hexu(num / len, base);
	if (write(1, &base[num % len], 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_puthexupper(va_list arg)
{
	unsigned int	num;
	
	num = (unsigned int)va_arg(arg, unsigned int);
	return (ft_hexu(num, "0123465789ABCDEF"));
}