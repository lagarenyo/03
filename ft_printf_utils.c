/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:52:10 by jmanzano          #+#    #+#             */
/*   Updated: 2022/09/05 23:52:13 by jmanzano         ###   ########.es       */
/*                                                                            */
/* ************************************************************************** */

int	ftp_strlen(char *str)
{
	int	res;

	res = -1;
	if (str)
	{
		res = 0;
		while (str[res])
			res++;
	}
	return (res);
}

void	ftp_bzero(char *str, int num)
{
	int	iter;

	iter = 0;
	while (iter < num)
	{
		str[iter] = 0;
		iter++;
	}
}

void	ftp_strcpy(char *dst, const char *src)
{
	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = *src;
}

void	ftp_ulltohex(char *dst, unsigned long long num, char c)
{
	char	val[17];
	char	aux[20];
	int		iter;

	iter = 0;
	if (c == 'X')
		ftp_strcpy(val, "0123456789ABCDEF");
	else
		ftp_strcpy(val, "0123456789abcdef");
	ftp_bzero(aux, 20);
	while (num > 15)
	{
		aux[iter] = val[num % 16];
		num /= 16;
		iter++;
	}
	aux[iter] = val[num];
	while (iter >= 0)
		*(dst++) = aux[iter--];
	*dst = '\0';
}

void	ftp_ulltodec(char *dst, unsigned long num)
{
	char	val[17];
	char	aux[20];
	int		iter;

	iter = 0;
	ftp_strcpy(val, "0123456789");
	ftp_bzero(aux, 20);
	while (num > 9)
	{
		aux[iter] = val[num % 10];
		num /= 10;
		iter++;
	}
	aux[iter] = val[num];
	while (iter >= 0)
		*(dst++) = aux[iter--];
	*dst = '\0';
}
