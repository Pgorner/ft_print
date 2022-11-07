/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrnoot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:37:43 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 18:19:52 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void nootptr(void *num)
{
	int len;

	len = 0;
	if (num >= 16)
	{
		nootptr(num / 16);
		nootptr(num % 16);
	}
	else
	{
		if (num <= 9)
			len += nootptr(num + '0')
		else
			len += nootptr(num - 10 + 'a')
	}
	return (len);
}

int ft_ptrnoot(unsigned long long ptr)
{
	int len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
		len += nootptr(ptr);

	return (len);
}
