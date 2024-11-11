/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:52:07 by duha              #+#    #+#             */
/*   Updated: 2024/11/12 01:16:35 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_lstclear - Deletes and frees the given node and every successor
 *               of that node, using the function ’del’ and free(3).
 *               Finally the pointer to the list must be set to NULL.
 *
 * @lst: The address of a pointer to a node.
 * @del: The address of the function used to delete the content of the node.
 */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = temp;
	}
	*lst = NULL;
}
