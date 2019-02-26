/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:50:24 by kibotrel          #+#    #+#             */
/*   Updated: 2019/02/26 14:10:07 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(*join) * (size + 1))))
		return (0);
	return (ft_strncat(ft_strncpy(join, s1, ft_strlen(s1)), s2, ft_strlen(s2)));
}
