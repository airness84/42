/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:07:41 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/25 19:49:28 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int max;
	int min;
	int *array;
	int i;

	//max = 2147483647;
	//min = -2147483648;
	min = -25;
	max = 214;
	array = ft_range(min, max);
	i = 0;
	while (min <= max)
	{
		printf("array[%d]: %d\n", i, array[i]);
		min++;
		i++;
	}
	printf("ft_range: %p\n", ft_range(min, max));
	return (0);
}
