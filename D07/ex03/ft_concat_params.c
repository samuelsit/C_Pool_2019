/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 16:32:48 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/24 17:44:41 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*str;

	i = 1;
	len = 0;
	str = NULL;
	while (i < argc)
	{
		len += ft_strlen(argv[i]) + 1;
		i++;
	}
	str = (char *)malloc(sizeof(*str) * len);
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i < argc - 1)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
