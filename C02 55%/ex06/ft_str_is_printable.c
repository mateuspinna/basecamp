/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:26:39 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 22:26:40 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
		{
			return (0);
		}
		i++;
	}	
	return (1);
}

// int		main(void)
// {
// 	char printable[] = "ABCXYZ";
// 	char *p_to_printable;
// 	p_to_printable = printable;

// 	char special_chars[] = "\\/\n";
// 	char *p_to_especial;
// 	p_to_especial = special_chars;

// 	char empty_string[] = "";
// 	char *p_to_empty;
// 	p_to_empty = empty_string;

// 	printf("%s = %d\n", printable, ft_str_is_printable(p_to_printable));
// 	printf("%s = %d\n", special_chars, ft_str_is_printable(p_to_especial));
// 	printf("Empty = %d\n", ft_str_is_printable(p_to_empty));

// 	return (0);
// }