/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:07:18 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 12:53:51 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_rep(char *base, char c)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (base[n])
		if (base[n++] == c)
			i++;
	if (i >= 2)
		return (0);
	return (1);
}

void	ft_print_base(int nbr, char *base, int base_len)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)base_len)
	{
		ft_print_base(n / base_len, base, base_len);
		ft_print_base(n % base_len, base, base_len);
	}
	else
		ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	n;

	base_len = 0;
	n = 0;
	while (base[base_len] != '\0' && n != 1)
	{
		if (base[base_len] == '+' || base[base_len] == '-'
			|| !ft_rep(base, base[n]))
			n = 1;
		base_len++;
	}
	if (base_len <= 1)
		n = 1;
	if (n == 0)
		ft_print_base(nbr, base, base_len);
}

int main(void)
{
	char base[] = "0A000";

	ft_putnbr_base(5, base);
	ft_putchar('\n');
}