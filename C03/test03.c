/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:16 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 20:27:34 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[] = "Good";
	char src[] = "Night";
	char dest_2[] = "Good";
	char src_2[] = "Night";
	unsigned int nb; 

	nb = 2;
	printf("%s\n", dest);
	printf("%s\n", src);
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	strncat(dest_2, src_2, nb);
	printf("%s\n", dest_2);
	return (0);
}
