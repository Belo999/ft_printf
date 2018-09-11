/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_detect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:46:44 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 13:53:32 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "flags.h"

int	ft_flag_detect(char s)
{
	int i;

	i = 0;
	while (flags[i])
	{
		if (flags[i] == s)
			return (1);
		i++;
	}
	return (0);
}
