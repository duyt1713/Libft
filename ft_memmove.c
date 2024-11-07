/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:42:41 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 03:53:47 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memmove - Copies len bytes from memory area src to memory area dst.
 *              The memory areas may overlap.
 * @dst: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @len: Number of bytes to copy.
 *
 * This function copies len bytes from the memory area pointed to by src
 * to the memory area pointed to by dst. The memory areas may overlap.
 *
 * Note: The standard memmove function does not handle NULL pointers and assumes
 *       that the caller ensures valid pointers.
 *       If memory overlapping is not an issue, consider using ft_memcpy
 *       as it may be faster.
 *
 * Return: A pointer to the destination memory area dst.
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s && d < (s + len))
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char dst1[] = "0123456789";
	char dst2[] = "0123456789";
	printf("Before ft_memmove: %s\n", dst1);
	printf("Before memmove: %s\n", dst2);
	ft_memmove(dst1 + 4, dst1, 6);
	memmove(dst2 + 4, dst2, 6);
	printf("After ft_memmove: %s\n", dst1);
	printf("After memmove: %s\n", dst2);
	return (0);
} */
