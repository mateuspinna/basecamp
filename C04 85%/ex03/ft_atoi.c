/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:56:48 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 18:20:06 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	rev;
	int	res;
	int	n;

	res = 0;
	n = 0;
	rev = 1;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
	{
		n++;
	}
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n++] == '-')
		rev = rev * -1;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + str[n++] - '0';
	}
	return (res * rev);
}

int main ()
{
	char str[] = "  --+ -123@22";
	printf(" Int > %d\n", ft_atoi(str));
}