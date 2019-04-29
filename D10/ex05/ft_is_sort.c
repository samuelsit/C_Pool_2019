/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:53:01 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/27 21:00:37 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j == 0 && i < length - 1)
	{
		j = f(tab[i], tab[i + 1]);
		i++;
	}
	if (j > 0 && i < length - 1)
	{
		i--;
		while (++i < length - 1)
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
	}
	else if (j < 0 && i < length - 1)
	{
		i--;
		while (++i < length - 1)
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
	}
	return (1);
}
