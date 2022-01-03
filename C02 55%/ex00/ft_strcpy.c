/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:17:37 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/11 22:17:54 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char src[] = "full";
// 	char destino[] = "empty";
// 	char *dest;

// 	printf("BEFORE\nsrc: %s\ndes: %s\n", src, destino);

//     dest = ft_strcpy(destino, src);

// 	printf("AFTER\nsrc: %s\ndes: %s\n", src, dest);
// 	return (0);
// }
