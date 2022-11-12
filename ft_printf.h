/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/12 13:44:10 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// =============================================================================
//								  noot_type
// =============================================================================
// Just the thing that makes all of it noot
int		ft_printf(const char *noot, ...);
// Checks the flag and calls the according program
int		ft_flag(va_list args, const char flag);
// Checks for noot flags
int		ft_checkletter(const char *noot);
// Puts down the number noots
int		ft_nbr(int n);
// Converts the noots into hex and noots them
int		ft_hex(unsigned int num, const char flag);
// Puts down the ptr noots
int		ft_pointer(unsigned long long ptr);
// Puts down the character noots
int		ft_putchar(int noot);
// Puts down the string noots
int		ft_printstr(char *str);
// Puts down the unsigned noots
int		ft_uns(unsigned int n);
// =============================================================================
//						     libft files
// =============================================================================
// Bezero
void	ft_bzero(void *s, size_t n);
// Calloc
void	*ft_calloc(size_t count, size_t size);
// strlen
size_t	ft_strlen(const char *str);
// itoa
char	*ft_itoa(int n);
// Checks the noot for flags
void	ft_putchar_fd(char c, int fd);

#endif
