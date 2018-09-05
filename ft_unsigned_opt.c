/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_opt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:58:43 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 15:24:01 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_opt(char opt, va_list ap)
{
	unsigned int ret;
	char *str;
	if (opt == 'x' || opt == 'X')
	{
		ret = va_arg(ap, unsigned int);
		str = ft_itoa_base(ret, 16);
		ft_putstr(str);
		/* create a function to print hexadecimal numbers */
	}
	else if (opt == 'o')
	{
		ret = va_arg(ap, unsigned int);
		str = ft_itoa_base(ret, 8);
		ft_putstr(str);
	}
	else if (opt == 'b')
	{
		ret = va_arg(ap, unsigned int);
		/* Needs ft_itoa_base implementaion */
	}
	else if (opt == 'p')
	{
		/* need implemetaion */
	}
	else if (opt == 'u')
	{
		ret = va_arg(ap, unsigned int);
		ft_putnbr(ret);
	}
}
