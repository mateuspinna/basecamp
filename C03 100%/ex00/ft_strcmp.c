/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:46:15 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/14 12:17:57 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char s1[] = "PA";
// 	char s2[] = "PO";

// 	printf("strcmp: %d", ft_strcmp(s1, s2));
// }