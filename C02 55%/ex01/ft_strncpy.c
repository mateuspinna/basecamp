/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:46:59 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/14 19:38:23 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		main(void)
{
	char src[] = "hello";
	char dest[] = "";
 	unsigned int n;

	n = 7;

	printf("BEFORE\nsrc: %s\ndes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("AFTER\nsrc: %s\ndes: %s\n", src, dest);
	return (0);
}