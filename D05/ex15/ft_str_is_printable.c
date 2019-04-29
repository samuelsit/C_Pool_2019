/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:27:24 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/13 21:00:20 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (1);
		i++;
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (check(str) == 1)
		return (0);
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			return (1);
		i++;
	}
	return (0);
}
