/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:36:53 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/16 12:18:36 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}