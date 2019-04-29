/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:22:29 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/13 20:44:00 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (1);
		i++;
	}
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if (check(str) == 1)
		return (0);
	else if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			return (1);
		i++;
	}
	return (0);
}
