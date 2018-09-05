/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:03:46 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 13:57:13 by tmolokan         ###   ########.fr       */
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
#endif
