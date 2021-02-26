/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:48:16 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/22 09:02:26 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_copy_string(char *str, char *to_find, int i)
{
	int j;

	j = 0;
	while (str[i] != '\0')
	{
		to_find[j] = str[i];
		i++;
		j++;
	}
	to_find[j] = '\0';
}

char	*ft_strstr(char *str, char *to_find)
{
	int fit;
	int i;
	int j;

	i = 0;
	j = 0;
	fit = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			fit = 1;
			break ;
		}
		i++;
	}
	ft_copy_string(str, to_find, i);
	if (fit == 1)
		return (to_find);
	else
		return (NULL);
}
