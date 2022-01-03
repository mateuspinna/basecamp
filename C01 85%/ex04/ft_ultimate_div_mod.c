/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 02:31:58 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 02:32:38 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	empty_glass;

	if (*b != 0)
	{
		empty_glass = *a;
		*a = (*a / *b);
		*b = (empty_glass % *b);
	}
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = nb * (-1);
// 	}
// 	if (nb < 10)
// 		ft_putchar(nb + '0');
// 	else
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putchar(nb % 10 + '0');
// 	}
// }

// int main()
// {
// 	int a = 42;
// 	int b = 24;

// 	ft_ultimate_div_mod(&a, &b);
// 	ft_putnbr(a);
// 	ft_putchar(' ');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// }