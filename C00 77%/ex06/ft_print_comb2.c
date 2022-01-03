/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:10:32 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/08 23:04:04 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	first_2_digits;
	char	last_2_digits;

	first_2_digits = 0;
	last_2_digits = 0;
	while (first_2_digits <= 98)
	{
		last_2_digits = first_2_digits + 1;
		while (last_2_digits <= 99)
		{
			ft_putchar(first_2_digits / 10 + '0');
			ft_putchar(first_2_digits % 10 + '0');
			ft_putchar(' ');
			ft_putchar(last_2_digits / 10 + '0');
			ft_putchar(last_2_digits % 10 + '0');
			last_2_digits++;
			if (first_2_digits != 98)
				write(1, ", ", 2);
		}
	first_2_digits++;
	}
}
