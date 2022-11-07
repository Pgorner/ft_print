/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 18:28:12 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

// =============================================================================
//								  ctype
// =============================================================================
// Checks the flag and calls the according program
int		ft_flag(va_list args, const char flag);
// Checks the flag and calls the according program
int		ft_flag(va_list args, const char flag);
// Quite similar to ft_putchar. Just with a noot
int     ft_putnoot(const char * noot)
// Checks for flagletters
int     ft_checkletter(const char * noot)
// =============================================================================
//								  bonus
// =============================================================================
// Checks the flag and calls the according program
int		ft_flag_bonus(va_list args, const char flag);

#endif
