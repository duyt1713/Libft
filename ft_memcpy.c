/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:09:35 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:37:42 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcpy - Copies n bytes from memory area src to memory area dst.
 *
 * @dst: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n:   Number of bytes to copy.
 *
 * This function copies n bytes from the memory area pointed to by src
 * to the memory area pointed to by dst. The memory areas must not overlap.
 *
 * Note: The standard memcpy function does not handle NULL pointers and assumes
 *       that the caller ensures valid pointers.
 *       If src and dst overlap, the behavior is undefined.
 *       Consider using ft_memmove if this might be the case.
 *
 * Return: A pointer to the destination memory area dst.
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*p;

	if (!dst && !src)
		return (NULL);
	p = dst;
	while (n--)
		*(unsigned char *)dst++ = *(const unsigned char *)src++;
	return (p);
}
