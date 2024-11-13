/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:20:27 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:37:15 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstadd_front - Adds the node ’new’ at the beginning of the list.
 *
 * @lst: The address of a pointer to the first link of a list.
 * @new: The address of a pointer to the node to be added to the list.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
