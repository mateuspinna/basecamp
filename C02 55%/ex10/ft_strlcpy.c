/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 21:58:25 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/12 23:19:02 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// int		main(void)
// {
// 	char src[] = "mateus p";
// 	char dest[] = "";
// 	unsigned int n;

// 	n = 10;

// 	printf("BEFORE\n\tdes: %s\n\tsize: %d\n", src, n);

//     n = ft_strlcpy(dest, src, n);

// 	printf("AFTER\n\tdes: %s\n\tlenght: %d\n", dest, n);
// 	return (0);
// }