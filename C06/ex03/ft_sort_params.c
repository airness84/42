/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:20:48 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/24 21:58:02 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 1;
	while (i < argc)
	{
		str = argv[i];
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] != '\0' || s2[i] != '\0')
		result = s1[i] - s2[i];
	if (s1[i] == s2[i])
		result = 0;
	return (result);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < argc)
	{
		i = 1;
		while (i < argc - 1 - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	ft_print_params(argc, argv);
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}
