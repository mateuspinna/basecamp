/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 02:36:41 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 03:56:22 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	empty_glass;
	int	last;
	int	i;

	i = 0;
	last = size - 1;
	while (i < (size / 2))
	{
		empty_glass = tab[i];
		tab[i] = tab[last];
		tab[last] = empty_glass;
		i++;
		last--;
	}
}

void	put_array(int array[], int size)
{
    for (int i = 0; i < (size -1); i++)
    printf("%d, ", array[i]);
    printf("%d\n", array[size - 1]);
}

int		main (void)
{
	int tab[] = {10, 2, 3, 5};
	int size;

	size = 4;

	ft_rev_int_tab(tab, size);

	printf("Modificada: ");
	put_array(tab, size);
}