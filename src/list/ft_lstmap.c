/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:42:58 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:31:10 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdlib.h>

/**
 * ft_lstmap - Iterates the list ’lst’ and applies the function ’f’ on the
 *             content of each node. Creates a new list resulting of the
 *             successive applications of the function ’f’. The ’del’ function
 *             is used to delete the content of a node if needed.
 *
 * @lst: The address of a pointer to a node.
 * @f:   The address of the function used to iterate on the list.
 * @del: The address of the function used to delete the content of a node
 *       if needed.
 *
 * Return: The new list.
 *         NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp;

	if (!lst || !f | !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = f(lst->content);
		new_node = ft_lstnew((temp));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
