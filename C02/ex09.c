/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:33:56 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/17 22:08:15 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = " aBC abC xYz XYZ";

	ft_strcapitalize(str);
	printf("%s \n", str);
	return (0);
}
