/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 20:33:56 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/17 20:34:47 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "ABC abc xyz XYZ";

	ft_strlowcase(str);
	printf("%s \n", str);
	return (0);
}
