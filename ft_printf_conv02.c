/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv02.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:35:55 by jmanzano          #+#    #+#             */
/*   Updated: 2022/09/08 21:36:00 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_di(int num)
{
	char	str[20];
	int		res;
	long	aux;

	res = 0;
	aux = num;
	res = 0;
	ftp_bzero(str, 20);
	if (aux < 0)
	{
		res += write(1, "-", 1);
		aux *= -1;
	}
	ftp_ulltodec(str, aux);
	res += ft_printf_s(str);
	return (res);
}

int	ft_printf_u(unsigned int num)
{
	int		res;
	char	str[20];

	res = 0;
	ftp_bzero(str, 20);
	if (num < 0)
	{
		res += write(1, "-", 1);
		num += 0x2 ^ 32;
	}
	ftp_ulltodec(str, (unsigned long)num);
	res += ft_printf_s(str);
	return (res);
}

int	ft_printf_x(unsigned int num, char c)
{
	char	str[20];
	int		res;

	res = 0;
	ftp_bzero(str, 20);
	ftp_ulltohex(str, (unsigned long long)num, c);
	res += ft_printf_s(str);
	return (res);
}
