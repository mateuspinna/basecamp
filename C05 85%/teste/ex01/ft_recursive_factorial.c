/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:11:30 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 13:21:39 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 	}
// 	if (nb > 9)
// 		ft_putnbr(nb / 10);
// 	ft_putchar(nb % 10 + '0');
// }

// int main ()
// {
// 	ft_putnbr(ft_recursive_factorial(-1));
// 	ft_putchar('\n');
// }