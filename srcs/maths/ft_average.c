/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:52:01 by kibotrel          #+#    #+#             */
/*   Updated: 2019/07/15 20:58:09 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_average(double *value, int amount)
{
	int		i;
	double	total;

	i = 0;
	total = 0;
	if (!amount)
		return (0);
	while (i < amount)
		total += value[i++];
	return (total / amount);
}
