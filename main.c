/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:52:26 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/12 17:14:35 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int i = 7;
	int d = 4;
	char c = 'A';
	char* test = "The ith value";
	/*while (test != '\0') {
		ft_putstr(test);
		test++;
	}*/
	ft_printf("Hello %d Th%cbelo %d", i, c ,d);
	return 0;
}
