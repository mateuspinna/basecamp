/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:04:15 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 21:04:35 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (ft_recursive_power(nb, (power - 1)) * nb);
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
// 	ft_putnbr(ft_recursive_power(-2, 3));
// 	ft_putchar('\n');
// }