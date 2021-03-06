/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:20:42 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 10:17:51 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_intialize(t_flag *list, char	*str)
{
	list->str_cpy = str;
	list->num_pr = 0;
	list->conv_sp = 0;
	list->int_holder = 0;
	list->char_holder = 0;
	list->percentage = 0;
	list->unsigned_int_holder = 0;
	list->mem_ptr = NULL;
	list->uni_char = 0;
	list->uni_str = NULL;
	list->str_holder = NULL;
}

void		ft_printf(const char *str, ...)
{
	t_flag	list;

	va_start(list.ap, (char*)str);
	ft_intialize(&list, (char *)str);
	ft_out(&list);
	va_end(list.ap);
}
