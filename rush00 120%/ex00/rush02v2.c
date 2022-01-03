/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:34:23 by coder             #+#    #+#             */
/*   Updated: 2021/12/04 23:17:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y)
	{
		if ((l == 1 && c == 1) || (l == 1 && c == x))
			ft_putchar('A');
		else if (((c == 1 && l == y) || (c == x && l == y)) && y != 1)
			ft_putchar('C');
		else if (c == 1 || c == x || l == 1 || l == y)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (c == x)
		{
			ft_putchar('\n');
			c = 1;
			l++;
		}
		else
			c++;
	}
	return (0);
}
