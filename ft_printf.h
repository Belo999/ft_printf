/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:03:46 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 15:08:52 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdlib.h"
# include "unistd.h"
# include "stdarg.h"

void	ft_putchar(char c);
void	ft_putstr(const char *str);
size_t	ft_strlen(const char *str);
void	ft_printf(const char *str, ...);
char 	*ft_itoa_base(unsigned int num, int base);
void	ft_str_option(char opt, va_list ap);
void	ft_char_option(char opt, va_list ap);
void	ft_num_option(char opt, va_list ap);
void	ft_unsigned_opt(char opt, va_list ap);
void	ft_putnbr(int nb);
#endif
