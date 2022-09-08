/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:48:21 by jmanzano          #+#    #+#             */
/*   Updated: 2022/09/06 16:48:25 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_variante(char c, va_list lst_arg);

int		ft_printf_c(char c);
int		ft_printf_s(char *str);
int		ft_printf_p(unsigned long long num);
int		ft_printf_di(int num);
int		ft_printf_u(unsigned int num);
int		ft_printf_x(unsigned int num, char c);

int		ftp_strlen(char *str);
void	ftp_bzero(char *str, int num);
void	ftp_strcpy(char *dst, const char *src);
void	ftp_ulltohex(char *dst, unsigned long long num, char c);
void	ftp_ulltodec(char *dst, unsigned long num);

#endif
