/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:47:09 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 13:16:23 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

// int		main(void)
// {
// 	char alpha_upper[] = "ABCXYZ";
// 	char *p_to_alpha_upper;
// 	p_to_alpha_upper = alpha_upper;

// 	char special_chars[] = "ABCxyz 1!2@3#";
// 	char *p_to_especial;
// 	p_to_especial = special_chars;

// 	char empty_string[] = "";
// 	char *p_to_empty;
// 	p_to_empty = empty_string;

// 	printf("%s = %d\n", alpha_upper, ft_str_is_uppercase(p_to_alpha_upper));
// 	printf("%s = %d\n", special_chars, ft_str_is_uppercase(p_to_especial));
// 	printf("Empty = %d\n", ft_str_is_uppercase(p_to_empty));

// 	return (0);
// }