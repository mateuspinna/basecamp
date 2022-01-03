/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:27:44 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 23:22:51 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + ' ';
		}
		i++;
	}	
	return (str);
}

// int		main(void)
// {
// 	char uppercase[] = "ABCDEF";
// 	char *pointer_to_uppercase;
// 	pointer_to_uppercase = uppercase;

// 	char special_chars[] = "HH1@3#bc";
// 	char *pointer_to_especial;
// 	pointer_to_especial = special_chars;

// 	ft_strlowcase(pointer_to_uppercase);
// 	printf("%s\n", uppercase);
// 	ft_strlowcase(pointer_to_especial);
// 	printf("%s\n", special_chars);

// 	return (0);
// }