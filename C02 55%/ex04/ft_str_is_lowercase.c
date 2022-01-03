/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:24:52 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 22:25:30 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

// int		main(void)
// {
// 	char alpha_lower[] = "abcxyz";
// 	char *p_to_alpha_lower;
// 	p_to_alpha_lower = alpha_lower;

// 	char special_chars[] = "ABCxyz 1!2@3#";
// 	char *p_to_especial;
// 	p_to_especial = special_chars;

// 	char empty_string[] = "";
// 	char *p_to_empty;
// 	p_to_empty = empty_string;

// 	printf("%s = %d\n", alpha_lower, ft_str_is_lowercase(p_to_alpha_lower));
// 	printf("%s = %d\n", special_chars, ft_str_is_lowercase(p_to_especial));
// 	printf("Empty = %d\n", ft_str_is_lowercase(p_to_empty));

// 	return (0);
// }