/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:02:33 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/14 17:31:33 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display_params(char **str)
{
	int i;

	i = 1;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*buff;
	int		i;
	int		j;

	i = argc - 1;
	while (i >= 1)
	{
		j = 1;
		while (j != i)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				buff = argv[i];
				argv[i] = argv[j];
				argv[j] = buff;
			}
			j++;
		}
		i--;
	}
	display_params(argv);
	return (0);
}
