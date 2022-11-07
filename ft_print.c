/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:22 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:45:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char * noot, ...)
{
    int     i;
    int     len;
	char	*flag;
    va_list args;
    
    i = 0;
    len = 0;
    va_start(args, noot);
	if (ft_check_noot(const char * noot, char *flag) == 0)
		while(noot[i])
			len += ft_putnoot(noot[i++]);
	va_end(args);
	return(len);
}
