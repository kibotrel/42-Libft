/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:44:53 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/15 18:23:07 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_chain	*ft_create_elem(void *data)
{
	t_chain *new;

	if (!(new = (t_chain*)malloc(sizeof(*new))))
		return (0);
	if (data)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
