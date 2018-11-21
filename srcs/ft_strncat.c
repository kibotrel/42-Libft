/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 20:26:18 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/11 14:46:04 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	while (s2[i] && i < n)
		s1[size++] = s2[i++];
	s1[size] = '\0';
	return (s1);
}
