/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:16 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/22 00:07:27 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Absolutley amazing!";
	char to_find[] = "k";
	char str_2[] = "Absolutley amazing!";
	char to_find_2[] = "k";
	char *pointer_1;
	char *pointer_2;

	printf("%s\n", str);
	printf("%s\n", to_find);
	pointer_1 = ft_strstr(str, to_find);
	pointer_2 = strstr(str_2, to_find_2);
	printf("%s\n", pointer_1);
	printf("%s\n", pointer_2);
	return (0);
}
