/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:20:27 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:37:32 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_lstnew - Allocates (with malloc(3)) and returns a new node. The member
 *             variable ’content’ is initialized with the value of the parameter
 *             ’content’. The variable ’next’ is initialized to NULL.
 *
 * @content: The content to create the node with.
 *
 * Return: The new node.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
