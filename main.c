/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:52:26 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/05 13:55:51 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int i = 7;
	char* test = "The ith value";
	/*while (test != '\0') {
		ft_putstr(test);
		test++;
	}*/
	ft_printf("Hello %s Thabelo", test);
	return 0;
}
