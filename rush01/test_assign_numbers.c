/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_assign_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:10:35 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 13:19:03 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_assign_numbers(int *map)
{
	int col_up[4];
	int col_down[4];
	int row_left[4];
	int row_right[4];
	int i;
	int x;

	i = 0;
	x = 1;
	while (i <= 3)
	{
		col_up[x] = map[i];
		printf("col_1up[%d] : %d\n", x, col_up[x]);
		i++;
		x++;
	}
	x = 1;
	while (i <= 7)
	{
		col_down[x] = map[i];
		printf("col_1down[%d] : %d\n", x, col_down[x]);
		i++;
		x++;
	}
	x = 1;
	while (i <= 11)
	{
		row_left[x] = map[i];
		printf("row_left[%d] : %d\n", x, row_left[x]);
		i++;
		x++;
	}
	x = 1;
	while (i <= 15)
	{
		row_right[x] = map[i];
		printf("row_right[%d] : %d\n", x, row_right[x]);
		i++;
		x++;
	}
	return (col_up[3]);
}

(int)	ft_input(char str*)
{
	int i;
	int map[16];
	
	if (argc != 2)
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
			i++;
	//printf("[i] %i\n", i);
	if (i != 31)
			{
				write(1, "Error", 5);
				write(1, "\n", 1);
				return (1);
			}

	while (str[i] != '\0')
	{
		if (str[i] > '0' && str[i] < '5')
		{
			map[x] = str[i] - '0';
			x++;
		}
		i++;
	}
	x = 0;
	while ( x < 16)
	{
		//printf("map[%d] : %d\n", x, map[x]);
		x++;
	}
	ft_assign_numbers(map[15]);
}


//"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
int	main(int argc, char **argv)
{	
	ft_input(argv[1])
		return (0);
}
