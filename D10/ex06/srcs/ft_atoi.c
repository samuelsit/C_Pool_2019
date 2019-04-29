/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 17:36:44 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/21 23:51:35 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		backslash(char *str)
{
	return ((*str == '\f') || (*str == '\t') ||
			(*str == '\n') || (*str == '\r') ||
			(*str == '\v') || (*str == ' '));
}

int		is_neg(int isneg, char *str)
{
	if (*str == '-')
		isneg = 1;
	return (isneg);
}

int		ft_atoi(char *str)
{
	int nb;
	int isneg;

	isneg = 0;
	nb = 0;
	while (backslash(str))
		str++;
	isneg = is_neg(isneg, str);
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	if (isneg == 1)
		return (-nb);
	else
		return (nb);
}
