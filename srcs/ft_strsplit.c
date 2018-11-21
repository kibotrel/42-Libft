/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:14:34 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/14 13:53:08 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	word_count(char const *s, char c)
{
	int i;
	int	count;

	i = -1;
	count = 0;
	while (s && s[++i])
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
	return (count);
}

static int	word_length(char const *s, int i, char c)
{
	int length;

	length = 0;
	while (s[i] && s[i] != c)
	{
		length++;
		i++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	if (!s || !(tab = (char**)malloc(sizeof(*tab) * (word_count(s, c) + 1))))
		return (0);
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			tab[j++] = ft_strsub(s, i, word_length(s, i, c));
			i += word_length(s, i, c);
		}
	}
	tab[j] = 0;
	return (tab);
}
