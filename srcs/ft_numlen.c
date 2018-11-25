/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:24:36 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/25 19:21:38 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_numlen(int nb)
{
	unsigned int	size;

	size = 1;
	if (nb < 0)
		size++;
	while (nb / 10)
	{
		nb /= 10;
		size++;
	}
	return (size);
}
