/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:25:36 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 15:13:31 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_char_handler(t_flag *list)
{
	ft_putchar(list->char_holder);
	list->num_pr++;
}

void		ft_str_handler(t_flag *list)
{
	ft_putstr(list->str_holder);
	list->num_pr += ft_strlen(list->str_holder);
}

/*void	ft_wstr_handler(t_flag *list)
{
	ft_putstr(list->uni_str);
	list->num_pr += ft_strlen(list->uni_str;
}

 we still have to handle the address */

void		ft_handle_quot(t_flag *list)
{
	ft_putstr("%");
	list->num_pr++;
}
