/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:51:17 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/15 18:34:37 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_btree	*ft_btree_create_node(void *item)
{
	t_btree *elem;

	if (!(elem = malloc(sizeof(*elem))))
		return (NULL);
	elem->item = item;
	elem->left = NULL;
	elem->right = NULL;
	return (elem);
}
