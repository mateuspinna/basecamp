/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucasfads@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:34:23 by coder             #+#    #+#             */
/*   Updated: 2021/12/05 15:47:46 by lucafern         ###   ########.fr       */
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
	while (l <= y && c <= x)
	{
		if ((l == 1 && c == 1) || (l == y && c == x && l != 1 && c != 1))
			ft_putchar('/');
		else if ((l == y && c == 1) || (l == 1 && c == x))
			ft_putchar('\\');
		else if (c == 1 || c == x || l == 1 || l == y)
			ft_putchar('*');
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
