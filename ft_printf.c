/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:15:23 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 15:14:03 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	va_list ap;
	int ch;
	char *ret = NULL;

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
				ch = va_arg(ap, int);
				ft_putchar(ch);
				str++;
			}
			else if (*str == 'd' || *str == 'i')
			{
				ch = va_arg(ap, int);
				if (ch < 0)
				{
					ch = -ch;
					ft_putchar('-');
				}
				ft_putstr(ft_itoa_base(ch, 10));
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
				ret = va_arg(ap, char *);
				ft_putstr(ret);
				str++;
			}
		}
	}
	va_end(ap);
}
