/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:32:03 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/25 14:14:56 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c)
{
	return ((c == '\t' || c == '\n' || c == '\r' || c == '\v'
			|| c == '\f' || c == ' ') ? 1 : 0);
}

static int	lim(unsigned long long n, int sign)
{
	if (n >= LLMAX && sign == 0)
		return (-1);
	if (n >= LLMAX + 1 && sign == 1)
		return (0);
	return (42);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					negative;
	unsigned long long	result;

	i = 0;
	negative = 0;
	result = 0;
	while (is_blank(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (ft_isdigit((int)str[i]))
		result = result * 10 + ((int)str[i++] - '0');
	if (lim(result, negative) == 0 || lim(result, negative) == -1)
		return (lim(result, negative));
	return ((negative == 1) ? -result : result);
}
