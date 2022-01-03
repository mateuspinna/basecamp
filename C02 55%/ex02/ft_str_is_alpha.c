/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:09:38 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 13:16:11 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

// int		main(void)
// {
// 	char alphabet[] = "ABCxyz";
// 	char *pointer_to_alphabet;
// 	pointer_to_alphabet = alphabet;

// 	char special_chars[] = "ABCxyz 1!2@3#";
// 	char *pointer_to_especial;
// 	pointer_to_especial = special_chars;

// 	char empty_string[] = "";
// 	char *pointer_to_empty;
// 	pointer_to_empty = empty_string;

// 	printf("%s = %d\n", alphabet, ft_str_is_alpha(pointer_to_alphabet));
// 	printf("%s = %d\n", special_chars, ft_str_is_alpha(pointer_to_especial));
// 	printf("Empty = %d\n", ft_str_is_alpha(pointer_to_empty));

// 	return (0);
// }