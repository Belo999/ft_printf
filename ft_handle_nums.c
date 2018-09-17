/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_nums.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:51:45 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 16:13:05 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_int_handler(t_flag *list)
{
	char 	*ret;
	int		s_len;

	s_len = 0;
	ret = NULL;
	ft_putnbr(list->int_holder);
	ret = ft_itoa_base(list->int_holder, 10);
	s_len = ft_strlen(ret);
	list->num_pr += s_len;
}

void	ft_octal_handler(t_flag *list)
{
	char	*ret;
	int		s_len;

	s_len = 0;
	ret = NULL;
	ret = ft_itoa_base(list->unsigned_int_holder, 8);
	ft_putstr(ret);
	s_len = ft_strlen(ret);
	list->num_pr += s_len;
}

void	ft_hex_handler(t_flag *list)
{
	char	*ret;

	ret = NULL;
	if (list->conv_sp == 'x')
	{
		ret = ft_low_itoa_base(list->unsigned_int_holder, 16);
		ft_putstr(ret);
	}
	else if (list->conv_sp == 'X')
	{
		ret = ft_itoa_base(list->unsigned_int_holder, 16);
		ft_putstr(ret);
	}
}

void		ft_mem_handler(t_flag *list)
{
	char *ret;

	ret = NULL;
	ft_putstr("0x");
	ret = ft_low_itoa_base((unsigned long)list->mem_ptr, 16);
	ft_putstr(ret);
}
