/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:44:09 by duha              #+#    #+#             */
/*   Updated: 2024/11/14 07:52:22 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - Compares the first n bytes of the memory areas s1 and s2.
 *
 * @s1: Pointer to the first memory area.
 * @s2: Pointer to the second memory area.
 * @n:  Number of bytes to compare.
 *
 * This function compares the first n bytes of the memory areas pointed to by s1
 * and s2.
 *
 * Note: The standard memcmp function does not handle NULL pointers and assumes
 *       that the caller ensures valid pointers.
 *
 * Return: An integer less than, equal to, or greater than zero if the first n
 *         bytes of s1 are found, respectively, to be less than, to match, or be
 *         greater than the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
