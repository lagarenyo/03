/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:33:52 by jmanzano          #+#    #+#             */
/*   Updated: 2022/08/21 20:33:59 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

# include <stdio.h>

int ft_is_operation( char c );
void ft_printf_c( char c );
void ft_printf_s( char* str );
void ft_printf_p( unsigned long long point );
void ft_printf_d( int num );
void ft_printf_i( int num );
void ft_printf_u( unsigned int num );
void ft_printf_x( unsigned int num );
void ft_printf_X( unsigned int num );
void ft_operations( char operation, va_list param );
int ft_extract_operations( const char *ptrstr, int *index, va_list param );
int	ft_printf( char const *ptrstr, ... );
