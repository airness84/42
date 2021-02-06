/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mario.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:11:23 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/06 17:00:19 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_space(int height, int i, int j)
{
	j = height - i;
	while (j > 1)
	{
		printf(" ");
		j--;
	}
}

void	ft_hash(int i, int j)
{
	j = 0;
	while (j <= i)
	{
		printf("#");
		j++;
	}
}

int		main(void)
{
	int height;
	int i;
	int j;

	height = 0;
	while (height <= 0)
	{
		printf("Enter height: \n");
		scanf("%i", &height);
	}
	i = 0;
	while (i < height)
	{
		ft_space(height, i, j);
		ft_hash(i, j);
		printf("  ");
		ft_hash(i, j);
		printf("\n");
		i++;
	}
}
