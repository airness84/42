/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:42:25 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/13 08:50:57 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	printf("%i; %i \n", a, b);
	ft_swap(&a, &b);
	printf("%i; %i", a, b);
}
