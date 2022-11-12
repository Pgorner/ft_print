/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:57:12 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/08 14:06:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function creates an array with elements that are initialized to 0
**
** Return value:
** Returns the array
*/

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	if (size > 0 && (SIZE_MAX / size) < count)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
