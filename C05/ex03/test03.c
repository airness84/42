/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:33:28 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 23:48:56 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int nb;
	int power;

	nb = 2147483647;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
