/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mario.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:11:23 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/06 14:20:47 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
**this is my comment
*/

int	main(void)
{
	int height;
	int num_spaces;
	int num_hash;
	int i;
	int j;
	int k;
	int n;

	height = 0;
	while (height <= 0)
	{
		printf("Enter height: \n");
		scanf("%i", &height);
	}
	num_spaces = height - 1;
	num_hash = height -1;
	i = 0;
	n = 1;
	while (i < height)
	{
		j = 0;
		while (j < height - num_hash)
		{
			k = height - n;
			while (k > 0)
			{
				printf(".");
				k--;
			}
			n++;
			printf("#");
			j++;
		}
		num_hash--;
		printf("\n");
		i++;
	}
}
