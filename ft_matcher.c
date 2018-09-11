/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 11:49:25 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 14:05:03 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_matcher(t_flag *list, va_list ap)
{
	int ret;

	if (list->conv_sp == '%')
		/* ret = ft_percent(list, '%'); */
		ret = 0;
	else if (list->conv_sp == 'c' || list_conv_sp == 'C')
		/* ret = ft_printchars(list, va_arg(ap, void *)) */
		ret = 0;
	else if (list->conv_sp == 's' || list->conv_sp == 'S')
		/* res = (ft_handling_str(lst, va_arg(va, void *))); */
		ret = 0;
	else if (list->conv_sp == 'i' || list->conv_sp == 'd' || list->conv_sp == 'D')
		/* res = (ft_handling_digit(lst, va_arg(va, void *))); */
		ret = 0;
	else if (list->conv_sp == 'u' || list->conv_sp == 'U')
		/* res = (ft_handling_unsigned_digit(lst, va_arg(va, void *))); */
		ret = 0;
	else if (list->conv_sp == 'x' || list->conv_sp == 'X')
		/* res = (ft_handling_x(lst, va_arg(va, void *))); */
		ret = 0;
	else if (list->conv_sp == 'o' || list->conv_sp == 'O')
		/* res = (ft_handling_o(lst, va_arg(va, void *))); */
		ret = 0;
	else if (list->conv_sp == 'p')
		/* res = (ft_handling_ptr(lst, va_arg(va, void *))); */
		ret = 0;
	else
		/* res = (ft_handling_char(lst, va_arg(va, void *))); */
		ft_strdel(&(lst->flags));
	return (ret);
}
