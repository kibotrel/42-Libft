/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:27:04 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/13 11:26:52 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*source;
	unsigned char		*dest;
	size_t				i;

	source = (unsigned const char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	if (dst > src)
	{
		while (++i <= len)
			dest[len - i] = source[len - i];
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
