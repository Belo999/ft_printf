/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:20:36 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 14:03:38 by tmolokan         ###   ########.fr       */
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
	char						*flags;
	int							printed;
	int							flag_sharp;
	int							flag_zero;
	int							flag_space;
	int							flag_plus;
	int							flag_minus;
	long long int				s_int_val;
	unsigned long long int 		u_int_val;
	char						conv_sp;
};

typedef	struct	s_flag	t_flag;

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
size_t	ft_strlen(const char *str);
void	ft_putstr(const char *str);
int		ft_strchr(char *str,unsigned char c);
int		ft_search_conv(char **str, va_list ap);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);
int		ft_matcher(t_flag *list, va_list ap);
int		ft_flag_detect(char s);
int		ft_conv_detect(char s);
int		ft_double_quote(char *str);
#endif
