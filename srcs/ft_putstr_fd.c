/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:02:24 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/11 17:53:02 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t	ft_strlen_protect(char const *s)
{
	size_t i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void			ft_putstr_fd(char const *s, int fd)
{
	(write(fd, s, ft_strlen_protect(s)));
}
