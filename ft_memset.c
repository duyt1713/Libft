/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:34:47 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 23:32:31 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memset - Fills the first len bytes of the memory area pointed to by b
 *             with the constant byte c.
 * @b: Pointer to the memory area to be filled.
 * @c: The byte value to be set.
 * @len: Number of bytes to be set to the value.
 *
 * This function sets the first len bytes of the memory area pointed to by b
 * to the specified value c (converted to an unsigned char).
 *
 * Return: A pointer to the memory area b.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)b;
	while (len > 0)
	{
		*string = (unsigned char)c;
		string++;
		len--;
	}
	return (b);
}
