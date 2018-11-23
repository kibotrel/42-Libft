/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:49:09 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/14 11:10:58 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_size;

	i = ft_strlen(dst);
	dest_size = i;
	j = 0;
	if (size == 0)
	{
		dst[i] = '\0';
		return (ft_strlen(src));
	}
	else if (size <= i)
		return (ft_strlen(src) + size);
	else
	{
		while (src[j] && i + j < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (ft_strlen(src) + dest_size);
}
