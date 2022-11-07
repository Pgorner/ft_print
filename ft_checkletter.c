/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkletter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:26:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:26:28 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkletter(const char * noot)
{
	if (noot[i+1] == 'c' || noot[i+1] == 's' || noot[i+1] == 'p' || noot[i+1] == 'd' || 
		noot[i+1] == 'i' || noot[i+1] == 'u' || noot[i+1] == 'x' || noot[i+1] == 'X' || noot[i+1] == '%')
		return (1);
	else 
		return (0);
}
