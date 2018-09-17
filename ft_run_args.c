/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:02:18 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 16:19:01 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_options(t_flag *list)
{
	if (list->conv_sp == 'c')
		ft_char_handler(list);
	else if (list->conv_sp == 'd' || list->conv_sp == 'i' || list->conv_sp == 'D')
		ft_int_handler(list);
	else if (list->conv_sp == 'o')
		ft_octal_handler(list);
	else if (list->conv_sp == 's')
		ft_str_handler(list);
	else if (list->conv_sp == '%')
		ft_handle_quot(list);
	else if (list->conv_sp == 'x' || list->conv_sp == 'X')
		ft_hex_handler(list);
	else if (list->conv_sp == 'p')
		ft_mem_handler(list);
}
