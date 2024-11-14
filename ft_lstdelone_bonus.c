/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:10:40 by duha              #+#    #+#             */
/*   Updated: 2024/11/14 09:35:50 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdlib.h>

/**
 * ft_lstdelone - Takes as a parameter a node and frees the memory of the node’s
 *                content using the function ’del’ given as a parameter and
 *                free the node. The memory of ’next’ must not be freed.
 *
 * @lst: The node to free.
 * @del: The address of the function used to delete the content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
