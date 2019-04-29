/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 20:28:43 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/07 16:23:57 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_nb(int nb)
{
	int decade;
	int unit;

	if (nb > 9)
	{
		decade = nb / 10;
		unit = nb % 10;
		ft_putchar(decade + 48);
		ft_putchar(unit + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	compare(int nb1, int nb2)
{
	if (nb1 < 98 || nb2 < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 99)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			print_nb(nb1);
			ft_putchar(' ');
			print_nb(nb2);
			compare(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}
