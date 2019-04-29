/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:46:42 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/10 16:38:36 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
write(1, &c, 1);
return (0);
}

void	print_nb(int nb1, int nb2, int nb3)
{
	ft_putchar(nb1);
	ft_putchar(nb2);
	ft_putchar(nb3);
}

void	compare(int nb1, int nb2, int nb3)
{
	if (nb1 < nb2 && nb2 < nb3)
	{
		print_nb(nb1, nb2, nb3);
		if (nb1 != '7' || nb2 != '8' || nb3 != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int nb1;
	int nb2;
	int nb3;

	nb1 = '0';
	nb2 = '1';
	nb3 = '2';
	while (nb1 <= '7')
	{
		while (nb2 <= '8')
		{
			while (nb3 <= '9')
			{
				compare(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
			nb3 = '0';
		}
		nb1++;
		nb2 = '0';
	}
}

int main()
{
ft_print_comb();
}
