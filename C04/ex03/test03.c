/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:40:31 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 09:55:50 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *str;
	int own;
	//int built;

	str = "		 ++p---4321";
	//str = "-2147483648";
	own = ft_atoi(str);
	//built = atoi(str);
	//printf("output_int: %i\n", own);
	//printf("output_int: %i\n", built);
	return (0);
}
