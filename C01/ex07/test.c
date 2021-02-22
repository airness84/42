/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:40:31 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/16 17:37:45 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int size;
	int tab[4];

	size = 4;
	tab[0] = 6;
	tab[1] = 5;
	tab[2] = 1;
	tab[3] = 7;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d,", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
