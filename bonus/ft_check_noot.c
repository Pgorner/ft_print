/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_noot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:45:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/08 14:47:18 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_noot (va_list args, const char flag)
{
	int len;

	len = 0;
	if (ft_checkletter(&flag) == 1)
		len += ft_flag(args, flag);
	else
		return(0);
	return (len);
}

/* , const char *noot */
