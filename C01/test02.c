/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:53:42 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/16 19:42:12 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	ft_swap(&a, &b);
	printf("%i, %i", a, b);
	return (0);
}
