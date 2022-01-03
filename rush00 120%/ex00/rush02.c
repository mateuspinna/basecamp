/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:50:12 by coder             #+#    #+#             */
/*   Updated: 2021/12/04 18:50:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int x, int col, char first_last_char, char middle_char)
{
	if (col == x)
	{
		ft_putchar(first_last_char);
		ft_putchar('\n');
	}
	else if (col == 1)
	{
		ft_putchar(first_last_char);
	}
	else
	{
		ft_putchar(middle_char);
	}
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	while (line <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (line == y && y != 1)
				write_line(x, col, 'C', 'B');
			else if (line == 1)
				write_line(x, col, 'A', 'B');
			else
				write_line(x, col, 'B', ' ');
			col++;
		}
		line++;
	}
	return ;
}
