/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kibotrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:56:20 by kibotrel          #+#    #+#             */
/*   Updated: 2018/11/15 18:30:31 by kibotrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btree_apply_prefix(t_btree *src, void (*applyf)(void *))
{
	if (src)
	{
		(*applyf)(src->item);
		ft_btree_apply_prefix(src->left, applyf);
		ft_btree_apply_prefix(src->right, applyf);
	}
}
