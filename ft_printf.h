/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:20:36 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/12 17:11:04 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdlib.h"
# include "unistd.h"
# include "stdarg.h"

struct 			s_flag
{
	va_list						ap;
	int							num_pr;
	char						conv_sp;
	char						*str_cpy;
	long long int				int_holder;
	char						char_holder;
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
int			ft_atoi(const char *str);
int			ft_iswhitespace(unsigned char c);
void		ft_out(t_flag *list);
void		ft_conversion(t_flag *list);
void		ft_putnbr(int nb);
void		ft_digit(t_flag *list);
void		ft_char(t_flag *list);
#endif
