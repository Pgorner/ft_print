/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:22 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/09 17:27:49 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	int		i;
	int		len;

	va_list args;

	i = 0;
	len = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			len += ft_flag(args, str[i + 1]); /* , noot */
			++i;
		}
		else
			len += ft_putchar(str[i]);
		++i;
	}
	va_end(args);
	return(len);
}
