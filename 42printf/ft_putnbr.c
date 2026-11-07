/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davatanz <davatanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 19:03:31 by davatanz          #+#    #+#             */
/*   Updated: 2026/11/07 16:13:51 by davatanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print(long long num)
{
	long long	lnum;
	long long	count;
	long long	temp;

	lnum = num;
	count = 0;
	if (lnum < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		lnum = -lnum;
		count++;
	}
	if (lnum >= 10)
	{
		temp = ft_print(lnum / 10);
		if (temp == -1)
			return (-1);
		count += temp;
	}
	if (write(1, &"0123456789"[lnum % 10], 1) == -1)
		return (-1);
	count++;
	return (count);
}

int	ft_putnbr(va_list arg)
{
	long long	num;

	num = va_arg(arg, int);
	return (ft_print(num));
}
