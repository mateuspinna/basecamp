/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 02:33:07 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 02:33:21 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
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
// 	int div = 0;
// 	int mod = 0;

// 	ft_div_mod(a, b, &div, &mod);
// 	ft_putnbr(a);
// 	ft_putchar(' ');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// 	ft_putnbr(div);
// 	ft_putchar(' ');
// 	ft_putnbr(mod);
// 	ft_putchar('\n');
// }