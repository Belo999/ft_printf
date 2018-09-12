/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:18:32 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/12 12:30:26 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_print(t_flag *list)
{
	while ((list->str_cpy) != '\0')
	{
		if ((list->str_cpy) != '%')
		{
			ft_putchar(*ret);
			list->num_pr++;
			list->str_cpy++;
		}
		else
		{
			(list->str_cpy)++;
			if (ft_strchr_f("%sSpdDioOuUxXcC", **fmt))
				list.spec = **fmt;
			else
				list.spec = **fmt;
		}
		ret++;
	}
	va_end(ap);
	return (len);
}
