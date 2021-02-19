/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:10:52 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/18 11:33:20 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)

{
	int i;
	int no_letters;

	i = 0;
	no_letters = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 122) || (str[i] > 90 && str[i] < 97))
		{
			no_letters++;
		}
		i++;
	}
	if (no_letters > 0)
		return (0);
	else
		return (1);
}
