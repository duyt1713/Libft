/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:13:30 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:31:20 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_bzero - Sets the first n bytes of the memory area pointed to by s to zero.
 *
 * @s: Pointer to the memory area to be zeroed.
 * @n: Number of bytes to be set to zero.
 *
 * This function sets the first n bytes of the memory area pointed to by s to 0
 * (bytes containing '\0'). It is typically used to initialize or clear a block
 * of memory.
 *
 * Note: This function uses ft_memset to set the memory to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
