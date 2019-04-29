/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 23:18:15 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/26 20:36:07 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	init_tab(int (*f[6])(int, int))
{
	f[0] = addition;
	f[1] = substraction;
	f[2] = multiplication;
	f[3] = division;
	f[4] = modulo;
	f[5] = badexpr;
}

int		check_nb(int *nb1, int *nb2, char ***av)
{
	if (is_nb((*av)[1]))
		*nb1 = ft_atoi((*av)[1]);
	else
	{
		ft_putchar('0');
		return (0);
	}
	if (is_nb((*av)[3]))
		*nb2 = ft_atoi((*av)[3]);
	else
	{
		ft_putchar('0');
		return (0);
	}
	return (1);
}
