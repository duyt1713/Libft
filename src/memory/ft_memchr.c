/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:20:38 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:31:25 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_memchr - Locate the first occurrence of c (converted to an unsigned char)
 *             in the first n bytes of the memory area pointed to by s.
 *
 * @s: Pointer to the memory area to be searched.
 * @c: Character to be located.
 * @n: Number of bytes to be analyzed.
 *
 * Return: A pointer to the matching byte
 *         or NULL if the character does not occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
