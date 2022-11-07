/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 16:19:32 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>

// =============================================================================
//								  ctype
// =============================================================================
// Checks the flag and calls the according program
int		ft_flag(va_list args, const char flag);
// Checks the flag and calls the according program
int		ft_flag(va_list args, const char flag);
// Quite similar to ft_putchar. Just with a noot
int     ft_putnoot(const char * noot)
// =============================================================================
//								  bonus
// =============================================================================
// Checks the flag and calls the according program
int		ft_flag_bonus(va_list args, const char flag);

#endif
