# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 09:21:17 by tmolokan          #+#    #+#              #
#    Updated: 2018/09/11 14:02:05 by tmolokan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc

F = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJECT = ./ft_putchar.o \
		 ./ft_strlen.o \
		 ./ft_putstr.o \
		./ft_printf.o \
		./ft_finder.o \
		./ft_strchr.o \
		./ft_search_conv.o \
		./ft_strcpy.o \
		./ft_strdup.o \
		./ft_flag_detect.o \
		./ft_conv_detect.o \
		./ft_double_quote.o
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

ft_double_quote.o: ft_double_quote.c
	$(GCC) $(F) -c ft_double_quote.c

ft_conv_detect.o: ft_conv_detect.c
	$(GCC) $(F) -c ft_conv_detect.c

ft_flag.o: ft_flag_detect.c
	$(GCC) $(F) -c ft_flag_detect.c

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

ft_finder.o: ft_finder.c
	$(GCC) $(F) -c ft_finder.c

ft_strchr.o: ft_strchr.c
	$(GCC) $(F) -c ft_strchr.c

ft_search_conv.o: ft_search_conv.c
	$(GCC) $(F) -c ft_search_conv.c
