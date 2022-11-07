/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pound_noot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:17 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:11:47 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <libft.h>

int ft_pound_noot(const char * noot, char *flag)
{
    int 	i;
	int		t;
    char 	res;

	i = 3;
	while ('0' <= noot[i] <= '9' || (ft_checkflag(noot[i+1]) == 1 ))
	{
		++i;
		t = i;
	}
	res = ft_calloc((t - 2) * sizeof(char *), 1)
    if (!res)
		return(0);
	i = 0;
	while (i <= t)
	{
		res[i] = noot[i];
		++i;
	}
	res[i] = '\0'
	&flag = res;
	free res;
	return (1);
}
