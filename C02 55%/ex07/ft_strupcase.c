/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:38:10 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 23:23:02 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}	
	return (str);
}

// int		main(void)
// {
// 	char lowercase[] = "abcxyz";
// 	char *pointer_to_lowercase;
// 	pointer_to_lowercase = lowercase;

// 	char special_chars[] = "hH1@3#bc";
// 	char *pointer_to_especial;
// 	pointer_to_especial = special_chars;

// 	ft_strupcase(pointer_to_lowercase);
// 	printf("%s\n", lowercase);
// 	ft_strupcase(pointer_to_especial);
// 	printf("%s\n", special_chars);

// 	return (0);
// }