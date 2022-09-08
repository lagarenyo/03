# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanzano <jmanzano@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 20:34:22 by jmanzano          #+#    #+#              #
#    Updated: 2022/08/21 20:34:25 by jmanzano         ###   ########.es        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SOURCES	= ft_printf.c ft_printf_conv01.c ft_printf_conv02.c ft_printf_utils.c

OBJS	= $(SOURCES:.c=.o)

CC		= clang

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rs $(NAME) $?

%.o: %.c
			$(CC) $(CFLAGS) -c $?

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
