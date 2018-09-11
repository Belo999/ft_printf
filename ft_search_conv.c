/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:47:10 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/11 14:07:38 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "flags.h"

static	void	ft_intialize(t_flag *list)
{
	list->flags = ft_strdup(" &&&&&");
}

/*static	void	ft_init_flags(char **str, t_flag *list)
{
	if (**str == '#')
		(list->flags)[1] = '#';
	else if (**str == '0')
		(list->flags)[2] = '0';
	else if (**str == '-')
		(list->flags)[3] = '-';
	else if (**str == '+')
		(list->flags)[4] = '+';
	else if (**str == ' ')
		(list->flags)[5] = ' ';
}
*/

int			ft_search_conv(char **str, va_list ap)
{
	t_flag	list;

	ft_intialize(&list);
	if (ft_conv_detect(**str))
		list.conv_sp = **str;
	else
		list.conv_sp = **str;
	return (ft_matcher(&list, ap));
}
