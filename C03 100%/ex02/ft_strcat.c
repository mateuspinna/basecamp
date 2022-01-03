/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:23:44 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/16 02:20:41 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
	len++;
	}
	while (src[i])
	{
		dest[len++] = src[i++];
	}
	dest[len] = '\0';
	return (dest);
}

int main()
{
	char s1[] = "POPOAOPu4";
	char s2[] = "02";

	printf("O resultado de strcmp foi: %s", ft_strcat(s1, s2));
}