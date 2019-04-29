/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:42:19 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/26 00:41:42 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int		addition(int nb1, int nb2)
{
	int res;

	res = nb1 + nb2;
	return (res);
}

int		substraction(int nb1, int nb2)
{
	int res;

	res = nb1 - nb2;
	return (res);
}

int		multiplication(int nb1, int nb2)
{
	int res;

	res = nb1 * nb2;
	return (res);
}

int		division(int nb1, int nb2)
{
	int res;

	if (nb2 == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	res = nb1 / nb2;
	return (res);
}

int		modulo(int nb1, int nb2)
{
	int res;

	if (nb2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	res = nb1 % nb2;
	return (res);
}
