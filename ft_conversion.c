/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:00:30 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 15:11:54 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_get_int(t_flag *list)
{
	list->int_holder = va_arg(list->ap, int);
}

void	ft_get_char(t_flag *list)
{
	list->char_holder = va_arg(list->ap, int);
}

void	ft_get_string(t_flag *list)
{
	wchar_t	*str;

	str = NULL;
	str = va_arg(list->ap, wchar_t*);
	if (list->conv_sp == 's' && str)
		ft_strcpy(list->str_holder, (char*)str);
	else if (list->conv_sp == 'S' && str)
		list->uni_str = str;
}

void	ft_get_unsigned(t_flag *list)
{
	list->unsigned_int_holder = va_arg(list->ap, unsigned int);
}

void		ft_conversion(t_flag *list)
{
	if (list->conv_sp == 'c')
		ft_get_char(list);
	else if (list->conv_sp == 'd' || list->conv_sp == 'i' || list->conv_sp == 'D')
		ft_get_int(list);
	else if (list->conv_sp == 's' || list->conv_sp == 'S')
		ft_get_string(list);
	else if (list->conv_sp == 'o' || list->conv_sp == 'u'
			|| list->conv_sp == 'x' || list->conv_sp == 'X')
		ft_get_unsigned(list);
	else if (list->conv_sp == 'O' || list->conv_sp == 'U')
		list->unsigned_int_holder = va_arg(list->ap, unsigned long long int);
	else if (list->conv_sp == 'p')
		list->mem_ptr = va_arg(list->ap, void*);
	/*else if (pf->convsp == 'o' || pf->convsp == 'u'
			|| pf->convsp == 'x' || pf->convsp == 'X')
		 handle octal and hexa
		ft_putchar('H');*/
}
