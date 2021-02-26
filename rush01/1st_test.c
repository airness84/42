/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1st_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:10:35 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 14:00:44 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_error(int argc, char **argv)
{
	int i;
	char *str;

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
//	printf("[i] %i\n", i);
	if (i != 31)
		{
			write(1, "Error", 5);
			write(1, "\n", 1);
			return (1);
		}
	else 
		return (0);
}
void	ft_input(char **argv)
{
	int i;
	int x;
	int map[16];
	char *str;

	str = argv[1];
	
	x = 0;
	i = 0;
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
		printf("map[%d] : %d\n", x, map[x]);
		x++;
	}
}


//"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
int		main(int argc, char **argv)
{	int i;

	i = ft_error(argc, argv);
	if (i == 1)
		return (1);
	ft_input(argv);
	//printf("%d\n", i);
	return (0);
}
