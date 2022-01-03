/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:41:42 by coder             #+#    #+#             */
/*   Updated: 2021/12/06 02:56:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	x_char;
	int	y_char;

	x = 0;
	y = 0;
	x_char = 0;
	y_char = 0;
	if (argc == 3)
	{
		while (argv[1][x_char] >= '0' && argv[1][x_char] <= '9')
		{
			x = (x * 10) + argv[1][x_char] - '0';
			++x_char;
		}
		while (argv[2][y_char] >= '0' && argv[2][y_char] <= '9')
		{
			y = (y * 10) + argv[2][y_char] - '0';
			++y_char;
		}
	}
	rush(x, y);
	return (0);
}
