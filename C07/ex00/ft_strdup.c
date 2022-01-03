/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:30:57 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/17 21:31:30 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;

	len = ft_strlen(src);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		return (NULL);
	}
	len = 0;
	ft_strcpy(ptr, src);
	return (ptr);
}

// int		main(void)
// {
// 	char src[] = "full";
// 	char destino[] = "";
// 	char *dest;

// 	printf("BEFORE\nsrc: %s\ndest: %s\n", src, destino);

//     dest = ft_strcpy(destino, src);

// 	printf("_______________\ndest: %s\n", dest);
// 	return (0);
// }