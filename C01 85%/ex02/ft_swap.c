/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:58:05 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/10 15:09:10 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	empty_glass;

	empty_glass = *a;
	*a = *b;
	*b = empty_glass;
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int main()
{
	int a = 24;
	int b = 42;

	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putnbr(b);
	ft_putchar('\n');	
}*/