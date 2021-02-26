/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:40:31 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 09:55:18 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		sign;
	int		number[2000];

	i = 0;
	j = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	printf("1st loop: %d", i);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
		printf("\n2nd loop: %d", i);
	}
	while (str[i] <= '0' && str[i] <= '9')
	{
		number[j] = str[i] + '0';
		i++;
		j++;
		printf("\n3rd loop: %d", i);
	}
	printf("%s\n", str);
	printf("%d\n", number[0]);
	printf("%d\n", sign);
	return (0);
}
