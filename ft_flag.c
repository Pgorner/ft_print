/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:20:47 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 18:26:15 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_flag (va_list args, const char flag)
{
	int len;

	len = 0;
	if (flag == 'c')
		len += ft_putcnoot(va_args(args, int));
	else if (flag == 's')
		len += ft_putsnoot(va_args(args, char *));
	else if (flag == 'p')
		len += ft_ptrnoot(va_args(args, unsigned long long));
	else if (flag == 'd')
		len += ft_nbrnoot(va_args(args, int));
	else if (flag == 'u')
		len += ft_unnoot(va_args(args, unsigned int));
	else if (flag == 'x' || flag == 'X')
		len += ft_hexnoot(va_args(args, int), flag);
	else if (flag == '%')
		len += write(1, "%", 1);
	return (len);
}
