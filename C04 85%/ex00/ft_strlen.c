/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:32:27 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/14 01:35:34 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
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
// 	char *str = "Continue a nadar!";
// 	ft_putnbr(ft_strlen(str));
// 	ft_putchar('\n');
// }