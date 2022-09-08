/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:59:36 by jmanzano          #+#    #+#             */
/*   Updated: 2022/09/04 15:59:42 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_variante(char c, va_list lst_arg)
{
	int	res;

	res = 0;
	if (c == 'c')
		res += ft_printf_c(va_arg(lst_arg, int));
	else if (c == 's')
		res += ft_printf_s(va_arg(lst_arg, char *));
	else if (c == 'p')
		res += ft_printf_p(va_arg(lst_arg, unsigned long long));
	else if ((c == 'd') || (c == 'i'))
		res += ft_printf_di(va_arg(lst_arg, int));
	else if (c == 'u')
		res += ft_printf_u(va_arg(lst_arg, unsigned int));
	else if ((c == 'x') || (c == 'X'))
		res += ft_printf_x(va_arg(lst_arg, unsigned long long), c);
	else if (c == '%')
		res += write(1, "%", 1);
	return (res);
}

int	ft_printf(char const *str, ...)
{
	int		res;
	va_list	lst_arg;

	va_start(lst_arg, str);
	res = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			res += ft_variante(*str, lst_arg);
			str++;
		}
		else
		{
			res += ft_printf_c(*str);
			str++;
		}
	}
	return (res);
}
