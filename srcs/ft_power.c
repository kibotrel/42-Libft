/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:17:24 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/16 15:01:14 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}