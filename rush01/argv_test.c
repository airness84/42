/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:10:35 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 12:30:56 by jjocher          ###   ########.fr       */
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
	int map[5][5];
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
	x = 0;
	y = 0;
	printf("string_char[0]: %c\n", str[0]);
	printf("entire_string: %s\n", str);
	while ((y <= 5) && (str[i] != '\0'))
	{
		while (x <= 5)
		{
			while ((str[i] > '0' && str[i] < '5'))
			{
				printf("int i: %d\n", i);
				printf("int x: %d\n", x);
				if (x > 0 && x < 5 && y == 0)
				{
					map[x][y] = str[i] - '0';
					x++;
				}
				if (x == 0 && y == 1)
				{
					map[x][y] = str[i] - '0';
					x++;
				}
				if (x == 5 && y == 1)
				{
					map[x][y] = str[i] - '0';
					x++;
				}
				else
					x++;
				i++;
			}
			
		}
		y++;
		x = 0;
	}
	
	printf("map[1][0] : %d\n",map[1][0]);
	printf("map[2][0] : %d\n",map[2][0]);
	printf("map[3][0] : %d\n",map[3][0]);
	printf("map[4][0] : %d\n",map[4][0]);
	return (0);
}
