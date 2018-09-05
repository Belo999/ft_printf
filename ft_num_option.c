/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:34:10 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 15:17:09 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_num_option(char opt, va_list ap)
{
	if (opt == 'd' || opt == 'i')
	{
		int ret;

		ret = va_arg(ap, int);
		ft_putnbr(ret);
	}
}
