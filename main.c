/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:52:26 by tmolokan          #+#    #+#             */
/*   Updated: 2018/09/17 16:15:51 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hello()
{
	int i = 1;
}

int main()
{
	char *s  = "Thabelo";
	char array[25] = "C programming language";
	int a = 15;
	char c = 'A';
	char* test = "The ith value";
	/*while (test != '\0') {
		ft_putstr(test);
		test++;
	}*/
	ft_printf("Hello %p\n", hello);
	return 0;
}
