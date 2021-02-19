/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:41:44 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/19 10:48:16 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mul(int a, int b)
{
	if (b == 0)
		return (0);
	if (b < 0)
		return -a + mul(a, b + 1);
	return a + mul(a, b - 1);
}

int	main(void)
{
	printf("%d\n", mul(4, 10));
	return (0);
}
