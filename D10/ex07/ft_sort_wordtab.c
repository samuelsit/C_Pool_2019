/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:46:11 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/27 21:01:18 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap_char(char **a, char **b)
{
	char *buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_char(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
