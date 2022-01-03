/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:20:02 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/13 03:23:14 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i - 1];
		if ((i == 0 || n == ' ' || n == '-' || n == '+'))
		{
			if (!((str[i] < 'a' || str[i] > 'z') 
					&& (str[i] >= 'A' || str[i] <= 'Z')))
			{
				str[i] = str[i] - ' ';
			}
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str1[] = "ReKt17+LOl -DR Mdr 4242l42";

	printf("Antes = %s\n", str1);
	printf("Depois = %s\n", ft_strcapitalize(str1));

}