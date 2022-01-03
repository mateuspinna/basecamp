/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:22:45 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 22:23:30 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

// int		main(void)
// {
// 	char algarisms[] = "0123456789";
// 	char *pointer_to_algarisms;
// 	pointer_to_algarisms = algarisms;

// 	char special_chars[] = "ABCxyz 1!2@3#";
// 	char *pointer_to_especial;
// 	pointer_to_especial = special_chars;

// 	char empty_string[] = "";
// 	char *pointer_to_empty;
// 	pointer_to_empty = empty_string;

// 	printf("%s = %d\n", algarisms, ft_str_is_numeric(pointer_to_algarisms));
// 	printf("%s = %d\n", special_chars, ft_str_is_numeric(pointer_to_especial));
// 	printf("Empty = %d\n", ft_str_is_numeric(pointer_to_empty));

// 	return (0);
// }