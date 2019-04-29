/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:33:17 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/27 18:39:40 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

int		badexpr(int nb1, int nb2)
{
	nb1 = 0;
	nb2 = 0;
	return (0);
}

int		is_nb(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

int		check_op(char *op, int (*f[6])(int, int), int nb1, int nb2)
{
	if (ft_strlen(op) != 1)
		return (f[5](nb1, nb2));
	else if (op[0] == '+')
		return (f[0](nb1, nb2));
	else if (op[0] == '-')
		return (f[1](nb1, nb2));
	else if (op[0] == '*')
		return (f[2](nb1, nb2));
	else if (op[0] == '/')
		return (f[3](nb1, nb2));
	else if (op[0] == '%')
		return (f[4](nb1, nb2));
	else
		return (f[5](nb1, nb2));
}

void	do_op(char **av)
{
	int		nb1;
	int		nb2;
	char	*op;
	int		(*f[6])(int, int);
	int		res;

	init_tab(f);
	op = av[2];
	if (check_nb(&nb1, &nb2, &av) == 0)
		return ;
	if (nb2 == 0 && av[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	else if (nb2 == 0 && av[2][0] == '/')
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	else
		res = check_op(op, f, nb1, nb2);
	ft_putnbr(res);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else
	{
		do_op(av);
		ft_putchar('\n');
	}
	return (0);
}
