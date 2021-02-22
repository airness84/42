/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:16 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/21 20:00:30 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[] = "Good";
	char src[] = "Night";

	printf("%s\n", dest);
	printf("%s\n", src);
	//ft_strcat(dest, src);
	strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
