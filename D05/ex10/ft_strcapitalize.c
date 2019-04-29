/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 16:19:48 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/13 18:06:43 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else if (str[i] >= '0' && str[i] <= '9')
		return (2);
	else
		return (3);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_letter(str, i) == 1)
			str[i] += 32;
		if ((is_letter(str, i - 1) == 3) && (is_letter(str, i) == 0))
			str[i] -= 32;
		i++;
	}
	return (str);
}
