/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:20:42 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 10:39:34 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	int 		len;
	va_list 	ap;

	len = 0;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str != '%')
			len += ft_putchar(*str);
		else
		{
			/*if (ft_convspec_detect(*str))
			{
				 detect for the conversion specifier
				str++;
			}
		*/
		}
		str++;
	}
	va_end(ap);
	return (len);
}
