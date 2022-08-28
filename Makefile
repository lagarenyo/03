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

SOURCES	= ft_printf.c ft_printf_cspd.c ft_printf_iuxX.c

OBJECTS	= $(SOURCES:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

LIBS	= libft.a

all:	$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS) $(LIBS)

%.o: %.c
			$(CC) $(CFLAGS) -c $?

clean:
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
