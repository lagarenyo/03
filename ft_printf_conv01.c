/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:52:43 by jmanzano          #+#    #+#             */
/*   Updated: 2022/09/05 23:52:47 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_c(char c)
{
	int	res;

	res = 0;
	res = write(1, &c, 1);
	return (res);
}

int	ft_printf_s(char *str)
{
	int	res;

	res = ftp_strlen(str);
	if (res >= 0)
		res = write(1, str, res);
	else
		res = ft_printf_s("(null)");
	return (res);
}

int	ft_printf_p(unsigned long long num)
{
	int		res;
	char	str[20];
	int		iter;

	iter = 19;
	res = 0;
	ftp_bzero(str, 20);
	if (num != 0)
	{
		res += write(1, &"0x", 2);
		ftp_ulltohex(str, num, 'x');
		res += ft_printf_s(str);
	}
	else
		res += write(1, "(nil)", 5);
	return (res);
}
