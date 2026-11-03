/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:15:42 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/03 11:25:32 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunbr(unsigned int num)
{
	long long	count;

	count = 0;
	if (num >= 10)
		count += ft_putunbr(num / 10);
	if (write(1, &"0123456789"[num % 10], 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_putunsign(va_list arg)
{
	unsigned int	num;
	
	num = (unsigned int)va_arg(arg, unsigned int);
	return (ft_putunbr(num));
}