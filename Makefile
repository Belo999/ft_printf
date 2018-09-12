# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 09:21:17 by tmolokan          #+#    #+#              #
#    Updated: 2018/09/12 14:14:30 by tmolokan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

F = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJECT = ./ft_putchar.o \
		 ./ft_strlen.o \
		 ./ft_putstr.o \
		./ft_printf.o \
		./ft_strchr.o \
		./ft_strcpy.o \
		./ft_strdup.o \
		./ft_itoa_base.o \
		./ft_int_handler.o \
		./ft_atoi.o \
		./ft_iswhitespace.o
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

ft_iswhitespace.o: ft_iswhitespace.c
	$(GCC) $(F) -c ft_iswhitespace.c

ft_atoi.o: ft_atoi.c
	$(GCC) $(F) -c ft_atoi.c ft_iswhitespace.c

ft_itoa_base.o: ft_itoa_base.c
	$(GCC) $(F) -c ft_itoa_base.c

ft_strcpy.o: ft_strcpy.c
	$(GCC) $(F) -c ft_strcpy.c

ft_strdup.o: ft_strdup.c
	$(GCC) $(F) -c ft_strdup.c

ft_putchar.o: ft_putchar.c
	$(GCC) $(F) -c ft_putchar.c

ft_strlen.o: ft_strlen.c
	$(GCC) $(F) -c ft_strlen.c

ft_putstr.o: ft_putstr.c
	$(GCC) $(F) -c ft_putstr.c

ft_printf.o: ft_printf.c
	$(GCC) $(F) -c ft_printf.c

ft_strchr.o: ft_strchr.c
	$(GCC) $(F) -c ft_strchr.c

