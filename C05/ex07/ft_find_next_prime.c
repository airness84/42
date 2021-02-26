/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:22:54 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/23 23:19:42 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	if (nb <= 1)
		return (2);
	while (nb <= 2147483647)
	{
		i = ft_is_prime(nb);
		if (i == 1)
			return (nb);
		else
			nb++;
	}
	return (nb);
}
