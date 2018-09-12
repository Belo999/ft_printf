/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:00:30 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/12 17:13:31 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_digit(t_flag *list)
{
	/* dont for to get the count of the numbers printed as printf will require it */
		list->int_holder = va_arg(list->ap, int);
		ft_putnbr(list->int_holder);
}

void	ft_char(t_flag *list)
{
	list->char_holder = va_arg(list->ap, int);
	ft_putchar(list->char_holder);
}

void		ft_conversion(t_flag *list)
{
	if (list->conv_sp == 'c' || list->conv_sp == 'C')
		/* handle characters */
		ft_char(list);
	else if (list->conv_sp == 'd' || list->conv_sp == 'i')
		/* handle integers */
		ft_digit(list);
	else if (list->conv_sp == 's' || list->conv_sp == 'S')
		/* handle string */
		ft_putchar('H');
	else if (list->conv_sp == 'p')
		/* handle pointers */
		ft_putchar('H');
	/*else if (pf->convsp == 'o' || pf->convsp == 'u'
			|| pf->convsp == 'x' || pf->convsp == 'X')
		 handle octal and hexa
		ft_putchar('H');*/
}
