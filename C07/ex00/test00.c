/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 23:07:41 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/25 14:49:05 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *str;
	char *result;

	str = "I wanna have malloc! I like to live on the heap! ;-)";
	result = ft_strdup(str);
	printf("own: %s\n", ft_strdup(str));
	printf("own: %c\n", result[0]);
	printf("pointer_adress: %p\n", ft_strdup(str));
	strdup(str);
	printf("built: %s\n", strdup(str));
	return (0);
}
