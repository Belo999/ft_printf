/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_detect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:53:49 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 14:25:58 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "flags.h"

int	ft_conv_detect(char s)
{
	int	i;

	i = 0;
	while (conv_sp[i])
	{
		if (conv_sp[i] == s)
			return (1);
		i++;
	}
	return (0);
}
