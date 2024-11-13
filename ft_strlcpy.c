/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:20:11 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:38:20 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcpy - Copies up to size - 1 characters from the NUL-terminated string
 *              src to dst, NUL-terminating the result.
 *
 * @dst:  The destination buffer.
 * @src:  The source string.
 * @size: The size of the destination buffer.
 *
 * This function copies up to size - 1 characters from the string src to dst,
 * ensuring that the result is NUL-terminated. It returns the total length of
 * the string it tried to create, which is the length of src.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if (len + 1 < size)
		ft_memcpy(dst, src, len + 1);
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}
