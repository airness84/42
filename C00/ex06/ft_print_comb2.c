/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:41:40 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/13 22:53:05 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(char a, char b, char c, char d)
{
	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		while(b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, "_", 1);
			while(c <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, ",", 1);
			}	c++;
		}	b++;
		a++;
	}
}

int		main(void)
{
	ft_print_comb2(0, 0, 0, 0);
	return(0);
}
