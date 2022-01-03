/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinna-l <mateuslousa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:21:06 by mpinna-l          #+#    #+#             */
/*   Updated: 2021/12/17 12:24:49 by mpinna-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_argv(int argc, char **argv)
{
	int		i;
	char	*empty_glass;

	while ((argc - 1) > 1)
	{
		i = argc;
		while (i > 1)
		{
			if (ft_strcmp(argv[i - 1], argv[argc - 1]) > 0)
			{
				empty_glass = argv[i - 1];
				argv[i - 1] = argv[argc - 1];
				argv[argc - 1] = empty_glass;
			}
			i--;
		}
		argc--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_argv(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
