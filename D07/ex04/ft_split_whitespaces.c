/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:35:59 by ssitruk           #+#    #+#             */
/*   Updated: 2019/04/05 12:36:37 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		word_len(char *str, int i)
{
	int j;

	j = i;
	while (str[j] >= 33 && str[j] <= 126)
		j++;
	return (j - i);
}

int		is_word_begin(char *str, int i)
{
	if (str[i] >= 33 && str[i] <= 126)
	{
		if (i == 0)
			return (1);
		else if (!(str[i - 1] >= 33 && str[i - 1] <= 126))
			return (1);
	}
	return (0);
}

int		words_count(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_word_begin(str, i))
			i++;
		i++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**tab;
	int		i;
	int		j;
	int		wlen;

	words = words_count(str);
	tab = malloc(sizeof(char *) * (words + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i + 1] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (is_word_begin(str, i))
		{
			wlen = word_len(str, i);
			tab[j] = malloc(sizeof(char) * (wlen + 1));
			ft_strncpy(tab[j], &str[i], wlen);
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
