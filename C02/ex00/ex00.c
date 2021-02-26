/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 10:10:52 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/22 08:35:53 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    print_hex(const char str)
{
    while(str != '\0')
        printf("%02x:", (unsigned int) *str++);
    printf("%02x:", (unsigned int) *str++);
    printf("\n");
}

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "You're doing great!!";
	char dest[10];

	
	ft_strcpy(dest, src);
	printf("%s \n", dest);
	print_hex(const char s);
	return (0);
}

