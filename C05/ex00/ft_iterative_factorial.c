/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 10:38:39 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 23:54:28 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
