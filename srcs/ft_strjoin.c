/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:50:24 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/11 16:58:55 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strlen_protect(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

static char		*ft_strcat_protect(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = ft_strlen_protect(s1);
	j = -1;
	while (s2 && s2[++j])
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}

static char		*ft_strcpy_protect(char *dst, const char *src)
{
	int		i;

	i = -1;
	while (src && src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	size = ft_strlen_protect(s1) + ft_strlen_protect(s2);
	if (!(join = (char*)malloc(sizeof(*join) * (size + 1))))
		return (0);
	return (ft_strcat_protect(ft_strcpy_protect(join, s1), s2));
}
