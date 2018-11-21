/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 17:19:53 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/15 19:44:10 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nmatch(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	if (s1[0] != '\0' && s2[0] == '*')
		return (ft_nmatch(s1 + 1, s2) || ft_nmatch(s1, s2 + 1));
	if (s1[0] == '\0' && s2[0] == '*')
		return (ft_nmatch(s1, s2 + 1));
	if (s1[0] == s2[0])
		return (ft_nmatch(s1 + 1, s2 + 1));
	return (0);
}
