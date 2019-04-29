/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 21:05:54 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/27 19:42:10 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_char(char **a, char **b)
{
	char *buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap_char(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
