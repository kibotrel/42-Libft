/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <kibotrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:19:22 by kibotrel          #+#    #+#             */
/*   Updated: 2019/03/29 17:19:30 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_count(char *str, char c)
{
	int	counter;

	counter = 0;
	while (str && *str)
		if (*str++ == c)
			counter++;
	return (counter);
}
