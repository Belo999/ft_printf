/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:07:06 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 14:24:37 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_str_option(char opt, va_list ap)
{
	char *ret;

	if (opt == 's' || opt == 'S')
	{
		ret = va_arg(ap, char *);
		if (opt == 's')
			ft_putstr(ret);
		else if (opt == 'S')
			/* putstr for octal represenation might be needed */
			ft_putstr(ret);
	}
}
