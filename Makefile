# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/05 12:01:28 by tmolokan          #+#    #+#              #
#    Updated: 2018/09/05 13:44:36 by tmolokan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

F = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJECT = ./ft_putchar.o \
		 ./ft_strlen.o \
		 ./ft_putstr.o \
		 ./ft_itoa_base.o \
		 ./ft_printf.o
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECT)
		ar rc $(NAME) $(OBJECT)
		ranlib $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all


ft_putchar.o: ft_putchar.c
	$(GCC) $(F) -c ft_putchar.c

ft_strlen.o: ft_strlen.c
	$(GCC) $(F) -c ft_strlen.c

ft_putstr.o: ft_putstr.c
	$(GCC) $(F) -c ft_putstr.c

ft_itoa_base.o: ft_itoa_base.c
	$(GCC) $(F) -c ft_itoa_base.c

ft_printf.o: ft_printf.c
	$(GCC) $(F) -c ft_printf.c
