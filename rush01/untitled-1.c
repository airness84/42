/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   untitled-1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:10:35 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 16:40:02 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



//"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
int	main(int argc, char **argv)
{
	char *str;
	int i;
	int map[16];
	//int col_up[3];
	//int col_down[3];
	//int row_left[3];
	//int row_right[3];

	int grid[4][4];
	
	int x;
	int y;


	str = argv[1];
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
	i = 0;
	x = 0;
	y = 0;
	//printf("string_char[0]: %c\n", str[0]);
	//printf("entire_string: %s\n", str);
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
	i = 0;
	x = 0;
	y = 0;
	
	while (y < 4)
	{
		while (x < 4)
		{
			grid[x][y] = map[i];
			printf("%d ", grid[x][y]);
			i++;
			x++;
		}
		printf("\n");
		x = 0;
		y++;
	}

printf("%d\n", grid[1][1]);

/* while loop to print 
  while (y < 4)
 {
     while (x < 4)
     {
         printf("%d ", grid[x][y]);
         x++;
     }
     printf("\n");
    y = 0; 
    x++;
 }


	while (i <= 3)
	{
		col_up[x][y]= map[i];
		printf("col_%dup[%d] : %d\n",x, x, col_up[x]);
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
	}*/
	
		return (0);
}
