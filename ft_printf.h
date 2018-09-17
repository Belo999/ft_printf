/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:20:36 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 16:18:05 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdlib.h"
# include "unistd.h"
# include "stdarg.h"

struct 			s_flag
{
	va_list							ap;
	int								num_pr;
	char							conv_sp;
	char							*str_cpy;
	long long int					int_holder;
	unsigned char					char_holder;
	char							percentage;
	unsigned long long int			unsigned_int_holder;
	void							*mem_ptr;
	wchar_t							uni_char;
	wchar_t							*uni_str;
	char							*str_holder;
};

typedef	struct	s_flag	t_flag;

void		ft_printf(const char *str, ...);
void		ft_putchar(char c);
size_t		ft_strlen(const char *str);
void		ft_putstr(const char *str);
int			ft_strchr(const char *str, int c);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *s);
char		*ft_itoa_base(int value, int base);
char		*ft_low_itoa_base(int value, int base);
int			ft_atoi(const char *str);
int			ft_iswhitespace(unsigned char c);
void		ft_out(t_flag *list);
void		ft_conversion(t_flag *list);
void		ft_putnbr(int nb);
void		ft_digit(t_flag *list);
void		ft_char(t_flag *list);
void		ft_int_handler(t_flag *list);
void		ft_octal_handler(t_flag *list);
void		ft_options(t_flag *list);
void		ft_get_unsigned(t_flag *list);
void		ft_get_char(t_flag *list);
void		ft_get_int(t_flag *list);
void		ft_char_handler(t_flag *list);
void		ft_str_handler(t_flag *list);
void		ft_wstr_handler(t_flag *list);
void		ft_handle_addr(t_flag *list);
void		ft_handle_quot(t_flag *list);
void		ft_hex_handler(t_flag *list);
void		ft_mem_handler(t_flag *list);
size_t		ft_int_len(unsigned long long n, int base);
#endif
