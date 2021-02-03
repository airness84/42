/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjocher <jjocher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:10:52 by jjocher           #+#    #+#             */
/*   Updated: 2021/02/03 11:05:24 by jjocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar (char c)

{
	write(1, &c, 1);
	return (0);
}

int	ft_nputchar (char c, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

int	main(void)
{
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return (0);
}
