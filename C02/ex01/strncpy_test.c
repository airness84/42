/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:10:52 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/19 22:15:35 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char src[] = "14256";
	char dest[50];
	unsigned int size;
	char *r;
	
	size = 10;
	r = 0;
	r = strncpy(dest, src, size);
	printf("%s\n", dest);
	return (0);
}
