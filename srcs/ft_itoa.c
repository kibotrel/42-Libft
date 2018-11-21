/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:56:21 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/14 11:01:57 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	numlen(int n)
{
	unsigned int size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10 != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	char		*str;
	int			length;
	long		nb;

	length = numlen(n);
	nb = n;
	if (!(str = (char*)malloc(sizeof(*str) * (length + 1))))
		return (0);
	str[length--] = '\0';
	str[0] = (n == 0 ? '0' : '-');
	if (n < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[length--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
