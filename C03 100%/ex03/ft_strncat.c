/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:04:12 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 13:52:39 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[i] && nb > 0)
	{
		dest[len++] = src[i++];
		nb--;
	}
	dest[len] = '\0';
	return (dest);
}

// int main()
// {
// 	char s1[] = "Mateus ";
// 	char s2[] = "Pinna aa";

// 	printf("O resultado de strcmp foi: %s", ft_strncat(s1, s2, 5));
// }