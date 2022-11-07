/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_noot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:45:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 17:35:38 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_noot (va_list args, const char flag, const char *noot)
{
	int len;

	if (ft_checkletter(flag) == 1)
		len += ft_flag(va_arg(args, flag));
	else if ((noot[2] == '-'))
		len += ft_flag_bonus(va_arg(args, noot));
	else if ((noot[2] == '#' && (noot[3] == 'x' || noot[3] == 'X')))
		len += ft_flag_bonus(va_arg(args, noot));
	else if ((noot[2] == ' '))
		len += ft_flag_bonus(va_arg(args, noot));
	else if ((noot[2] == '+'))
		len += ft_flag_bonus(va_arg(args, noot));
	return (len);
}
