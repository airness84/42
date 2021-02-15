/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherzog <jherzog@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:34:49 by jherzog           #+#    #+#             */
/*   Updated: 2021/02/14 20:21:27 by jherzog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ouput_top(int x, int c_x, int c_y)
{
	char top_left;
	char top_right;
	char horizontal_connector;

	top_left = 'A';
	top_right = 'C';
	horizontal_connector = 'B';
	if ((c_x == 0) && (c_y == 0))
	{
		ft_putchar(top_left);
	}
	else if ((c_x == x - 1) && (c_y == 0))
	{
		ft_putchar(top_right);
	}
	else if ((c_x > 0) && (c_x < x - 1) && (c_y == 0))
	{
		ft_putchar(horizontal_connector);
	}
}

void	ouput_middle(int x, int y, int c_x, int c_y)
{
	char vertical_connector;

	vertical_connector = 'B';
	if ((c_x == 0 || c_x == x - 1) && (c_y > 0 && c_y < y - 1))
	{
		ft_putchar(vertical_connector);
	}
	else if ((c_x > 0) && (c_x < x - 1) && (c_y > 0) && (c_y < y - 1))
	{
		ft_putchar(' ');
	}
}

void	ouput_down(int x, int y, int c_x, int c_y)
{
	char down_left;
	char down_right;
	char horizontal_connector;

	down_left = 'A';
	down_right = 'C';
	horizontal_connector = 'B';
	if ((c_x == 0) && (c_y == y - 1) && (y > 1))
	{
		ft_putchar(down_left);
	}
	else if ((c_x == x - 1) && (c_y == y - 1) && (x > 1))
	{
		ft_putchar(down_right);
	}
	else if ((c_x > 0 && c_x < x - 1) && (c_y == y - 1))
	{
		ft_putchar(horizontal_connector);
	}
}

void	rush(int x, int y)
{
	int c_x;
	int c_y;

	c_x = 0;
	c_y = 0;
	if (x < 1 || y < 1)
	{
		return ;
	}
	while (c_y < y)
	{
		while (c_x < x)
		{
			ouput_top(x, c_x, c_y);
			ouput_middle(x, y, c_x, c_y);
			ouput_down(x, y, c_x, c_y);
			c_x++;
		}
		ft_putchar('\n');
		c_x = 0;
		c_y++;
	}
}
