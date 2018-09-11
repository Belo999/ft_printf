/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:41:53 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 13:58:14 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

int	ft_len_mod(char s)
{
	int i;

	i = 0;
	while (len_mod[i])
	{
		if (len_mod[i] == s)
			return (1);
		i++;
	}
	return (0);
}

int	ft_double_quote(char *str)
{
	while (*str)
	{
		str++;
		if (*str == '%')
			return (1);
	}
	return (0);
}
