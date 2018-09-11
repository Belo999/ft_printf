/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:15:23 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 16:17:02 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	va_list ap;
	int ch;

	va_start(ap, str);
	while (*str != '\0')
	{
		while (*str != '%')
		{
			ft_putchar(*str);
			str++;
		}
		str++;
		if (*str)
		{
			if (*str == 'c')
			{
				ft_char_option(ap);
				str++;
			}
			else if (*str == 'd' || *str == 'i')
			{
				/* needs to be modified to handle negative numbers */
				ft_num_option(ap);
				str++;
			}
			else if (*str == 'o')
			{
				ch = va_arg(ap, unsigned int);
				ft_putstr(ft_itoa_base(ch, 8));
				str++;
			}
			else if (*str == 'x' || *str == 'X')
			{
				ch = va_arg(ap, unsigned int);
				ft_putstr(ft_itoa_base(ch, 16));
				str++;
			}
			else if (*str == 's')
			{
				ft_str_option(ap);
				str++;
			}
		}
	}
	va_end(ap);
}
