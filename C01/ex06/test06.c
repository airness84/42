/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:40:31 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/16 19:57:36 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;
	int i;

	str = "hello";
	i = ft_strlen(str);
	printf("%i", i);
	return (0);
}
