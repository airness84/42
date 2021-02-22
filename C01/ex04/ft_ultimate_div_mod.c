/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mode.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:53:42 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/15 18:07:47 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	int remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}
