/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:59:39 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/25 19:28:14 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int elem;
	int i;

	i = 0;
	elem = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			elem++;
		i++;
	}
	return (elem);
}