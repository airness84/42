/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:33:28 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 23:19:30 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int nb;

	nb = -2147483648;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
