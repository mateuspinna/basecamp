/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 13:34:13 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 21:07:52 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	aux;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else
		return (-1);
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
// 	ft_putnbr(ft_fibonacci(0));
// 	ft_putchar('\n');
// }