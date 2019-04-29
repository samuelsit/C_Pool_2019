/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:16:09 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/11 20:08:41 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nbr;

	i = 1;
	nbr = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (i < power)
		{
			nb = nb * nbr;
			i++;
		}
	return (nb);
}
