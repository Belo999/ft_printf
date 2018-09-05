/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_option.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:24:53 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 15:44:32 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_char_option(char opt, va_list ap)
{
	if (opt == 'c')
	{
		int ret;
		ret = va_arg(ap, int);
		ft_putchar(ret);
	}
}
