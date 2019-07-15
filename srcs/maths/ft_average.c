/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:52:01 by kibotrel          #+#    #+#             */
/*   Updated: 2019/07/15 21:08:56 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_average(double *value, int n)
{
	int		i;
	double	total;

	i = 0;
	total = 0;
	if (!n)
		return (0);
	while (i < n)
		total += value[i++];
	return (total / n);
}
