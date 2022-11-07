/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkletter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:26:18 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 17:27:12 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_checkletter(const char * noot)
{
	if (noot == 'c' || noot == 's' || noot == 'p' || noot == 'd' || 
		noot == 'i' || noot == 'u' || noot == 'x' || noot == 'X' || noot == '%')
		return (1);
	else 
		return (0);
}
