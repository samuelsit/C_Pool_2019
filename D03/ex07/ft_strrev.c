/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 21:18:59 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/09 16:40:56 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		search;
	char	letter;

	size = 0;
	search = 0;
	while (str[size] != '\0')
		size++;
	size--;
	while (size > search)
	{
		letter = str[search];
		str[search] = str[size];
		str[size] = letter;
		size--;
		search++;
	}
	return (str);
}
