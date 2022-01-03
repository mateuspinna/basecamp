/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:51:47 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/15 23:49:19 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	char_a;
	unsigned char	char_b;
	int				diff;

	i = 0;
	diff = 0;
	while (i < n)
	{
		char_a = (unsigned char) s1[i];
		char_b = (unsigned char) s2[i];
		diff = char_a - char_b;
		if (diff == 0 && (char_a != '\0' && char_b != '\0'))
		{
			i++;
			continue ;
		}
		else
			break ;
	}
	return (diff);
}

// int        main(void)
// {
//     char s1[] = "AADDA";
//     char s2[] = "AADDDADAD";
//     int x = 5;

//     int res = strncmp(s1, s2, x);
//     int meu = ft_strncmp(s1, s2, x);
//     printf("Resultado normal: %d\n", res);
//     printf("Resultado meu: %d\n", meu);
//     return (0);
// }