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

void ft_printf_c( char c )
{
	write(1, &c, 1);
}
void ft_printf_s( char* str );
void ft_printf_p( unsigned long long point );
void ft_printf_d( int num );
