/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:03:44 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 16:17:10 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_int_len(unsigned long long n, int base)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= base;
	}
	return (len);
}
