/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:22 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:19:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int ft_flag (va_list args, const char flag)
{
    int len; 

    len = 0; 
    if (flag == 'c')
    else if (flag == 'c')
    else if (flag == 's')
    else if (flag == 'p')
    else if (flag == 'd')
    else if (flag == 'i')
    else if (flag == 'u')
    else if (flag == 'x' || flag == 'X')
    else if (flag == '%')
    else if (flag == 'c')
    return (len);
}

int ft_flag_bonus (va_list args, const char flag)
{
    int len; 

    len = 0; 
    if (flag == 'c')
    else if (flag == 'c')
    else if (flag == 's')
    else if (flag == 'p')
    return (len);
}

int ft_checkflag(const char * noot)
{
	if (noot[i+1] == 'c' || noot[i+1] == 's' || noot[i+1] == 'p' || noot[i+1] == 'd' || 
		noot[i+1] == 'i' || noot[i+1] == 'u' || noot[i+1] == 'x' || noot[i+1] == 'X' || noot[i+1] == '%')
		return (1);
	else 
		return (0);
}





int ft_check_noot (const char * noot, char *flag)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (noot[i++] != % )
	if (!noot)
		return (0);
	else if (noot[i] == % && (ft_checkflag(noot[i+1]) == 1 ))
		{
			&flag[i] == noot[i];
			&flag[i+1] == noot[i+1]	
		}
	else if (noot[i] == % && (noot[i+1] == '-'))
		&flag = ft_neg_noot(const char * noot);
	else if (noot[i] == % && noot[i+1] == '#' && (noot[i+2] == 'x' || noot[i+2] == 'X')
		&flag = ft_pound_noot(const char * noot);
	return (1);
}

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
