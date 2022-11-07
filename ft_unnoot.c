/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unnoot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:30:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/07 19:46:57 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int nootlen(unsigned int num)
{
	int	len;
	
	len = 0;
	while (num != 0)
	{
		++len;
		num = num / 10;
	}
	return (len);
}

char *noottoa(unsigned int n)
{
	char 	*num;
	int		len;
	
	len = nootlen(n)
	num = (char *)ft_calloc(sizeof(char) * (len + 1));
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		--len;
	}
	return (num);
}

int ft_unnoot(unsigned int n)
{
	int len;
	char *num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = noottoa(n);
		len += ft_putsnoot(num)
		free(num);
	}
	return (len);
}