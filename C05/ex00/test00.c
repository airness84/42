/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:33:28 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 23:55:28 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int nb;
	int result;

	nb = 7;
	result = ft_iterative_factorial(nb);
	printf("%d\n", result);
	return (0);
}
