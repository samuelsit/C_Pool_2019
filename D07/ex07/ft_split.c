/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:00:23 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/22 16:21:08 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		split_char(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		word_len(char *str, char *charset)
{
	int i;

	i = 0;
	while (str[i] && !split_char(str[i], charset))
		i++;
	return (i);
}

int		count_word(char *str, char *charset)
{
	int nb_word;
	int i;

	nb_word = 0;
	i = 1;
	if (!str || !str[0])
		return (0);
	if (str && !split_char(str[0], charset))
		nb_word++;
	while (str[i])
	{
		if (split_char(str[i - 1], charset) && !split_char(str[i], charset))
			nb_word++;
		i++;
	}
	return (nb_word);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_word;
	int		wlen;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nb_word = count_word(str, charset);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	tab[nb_word] = 0;
	while (j < nb_word && str)
	{
		if ((str && i == 0 && !split_char(str[0], charset)) ||
			(split_char(str[i - 1], charset) && !split_char(str[i], charset)))
		{
			wlen = word_len(&str[i], charset);
			if (!(tab[j] = malloc(sizeof(char *) * (wlen + 1))))
				return (NULL);
			tab[j] = ft_strncpy(tab[j], &str[i], wlen);
			j++;
		}
		i++;
	}
	return (tab);
}
