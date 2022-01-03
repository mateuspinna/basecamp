/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:05:13 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 02:37:06 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	sub;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		sub = 0;
		while (str[i + sub] == to_find[sub] && str[i + sub] != '\0')
		{
			if (to_find[sub + 1] == '\0')
				return (&str[i]);
			sub++;
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "Meu nome é Mateus Pinna";
	char to_find[] = "";

	printf("%s\n%s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}