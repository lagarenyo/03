/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:33:38 by jmanzano          #+#    #+#             */
/*   Updated: 2022/08/21 20:33:41 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

# include <stdio.h>

int ft_is_operation( char c )
{
	char *operations ="cspdiuxX";
	char *iter;
	int res;

	res = 0;
	iter = operations;
	while (( *iter != c ) && ( *iter != '\0' ))
		iter++;
	if (*iter == c)
		res = 1;
	return res;
}

void ft_operations(char operation, va_list param)
{
	int leng;
	int iter;

	iter = 0;
	(void) iter;
//	leng = ft_strlen(operations);
//	if ( leng == 1 )
//	{
		if (operation == 'c')
			ft_printf_c(va_arg(param, int));
//		if (*operations == 's')
//			ft_printf_s(va_arg(param, *char));
//		if (*operations == 'p')
//			ft_printf_p(va_arg(param, char));
//		if (*operations == 'd')
//			ft_printf_d(va_arg(param, char));
//		if (*operations == 'i')
//			ft_printf_i(va_arg(param, char));
//		if (*operations == 'u')
//			ft_printf_u(va_arg(param, char));
//		if (*operations == 'x')
//			ft_printf_x(va_arg(param, char));
//		if (*operations == 'X')
//			ft_printf_X(va_arg(param, char));
//	}
}

int ft_extract_operations( const char *ptrstr, int *index, va_list param )
{
	char elements[10];
	int is_op;
	int iter;

	(*index)++;
	iter = 0;
	is_op = 0;
	ft_bzero( elements, 10);
	is_op = ft_is_operation(ptrstr[*index]);
	while (is_op)
	{
		elements[iter] = ptrstr[*index];
		(*index)++;
		iter++;
		is_op = ft_is_operation(ptrstr[*index]);
	//	actual_operation = ft_strchr( operations, *(ptrstr + (*index)));
	}
	elements[iter] = '\0';
	if (iter)
		ft_operations(elements[0], param);
	return 0;
}

int	ft_printf(char const *ptrstr, ...)
{
	int index;
	int res;
	va_list  param;

	index = 0;
	res = 0;
	va_start ( param, ptrstr);
	while ( ptrstr[index] != '\0')
	{
		if (ptrstr[index] == '%')
			res += ft_extract_operations( ptrstr, &index, param );
		write(1, &(ptrstr[index]), 1);
		res++;
		index++;
	}
	return res;
}
