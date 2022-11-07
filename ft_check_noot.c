/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_noot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:45:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:59:50 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_noot (const char * noot, char *flag)
{
	int i;
	int t;

	i = 0;
	t = 0;
	while (noot[i++] != % )
	if (!noot)
		return (0);
	else if (noot[i] == % && (ft_checkletter(noot[i+1]) == 1 ))
		{
			&flag[i] == noot[i];
			&flag[i+1] == noot[i+1]	
		}
	else if (noot[i] == % && (noot[i + 1] == '-'))
		&flag = (ft_neg_noot(const char * noot, char *flag));
	else if (noot[i] == % && (noot[i + 1] == '#' && (noot[i+2] == 'x' || noot[i+2] == 'X')))
		&flag = ft_pound_noot(const char * noot, char *flag);
	return (1);
}
