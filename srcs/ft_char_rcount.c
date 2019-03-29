/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_rcount.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:20:13 by kibotrel          #+#    #+#             */
/*   Updated: 2019/03/29 17:20:15 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_rcount(char *str, char c)
{
	int	counter;

	counter = 0;
	while (str && *str)
		if (*str++ != c)
			counter++;
	return (counter);
}
