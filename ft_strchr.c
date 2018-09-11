/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:12:38 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 14:10:58 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strchr(char *str, unsigned char c)
{
		char *temp;
		
		temp = (char *)str;
		if (*temp == '\0' || c == '\0')
			return (0);
		while (*temp != '\0')
		{
			if (*temp == c)
				return (1);
			temp++;
		}
		return (0);
}
