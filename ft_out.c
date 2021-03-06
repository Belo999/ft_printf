/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_out.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:33:14 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 12:35:49 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

void		ft_out(t_flag *list)
{
	while (*(list->str_cpy))
	{
		if (*(list->str_cpy) != '%')
		{
			ft_putchar(*(list->str_cpy));
			list->num_pr++;
			list->str_cpy++;
		}
		else
		{
			list->str_cpy++;
			list->conv_sp = (char)*(list->str_cpy);
			if (ft_strchr("%sSpdDioOuUxXcC", list->conv_sp))
			{
				ft_conversion(list);
				ft_options(list);
				list->str_cpy++;
			}
			else
			{
			/* list->conv_sp = *(list->str_cpy);
			 * search for any flags if any*/
				printf("J");
			}
		}
	}
}
