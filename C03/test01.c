/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:16 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 18:18:02 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n);

int	main(void)
{
	char *s1;
	char *s2;
	int n;
	int own;
	int built;

	n = 4;
	own = 0;
	built = 0;
	s1 = "abcd d";
	s2 = "abcdf";
	own = ft_strncmp(s1, s2, n);
	built = strncmp(s1, s2, n);
	printf("%i\n", own);
	printf("%i\n", built);
	return (0);
}
