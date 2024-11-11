/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:02:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/12 01:28:44 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcat - Concatenates the string src to the end of dst, ensuring that the
 *              result is null-terminated and does not exceed size bytes.
 *
 * @dst:  The destination buffer.
 * @src:  The source string.
 * @size: The total size of the destination buffer.
 *
 * This function appends the null-terminated string src to the end of dst. It
 * will append at most size - ft_strlen(dst) - 1 bytes, null-terminating the
 * result. The function returns the total length of the string it tried to
 * create, which is the initial length of dst plus the length of src. If the
 * return value is greater than or equal to size, truncation occurred.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	cat_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	cat_len = size - dst_len - 1;
	if (cat_len > src_len)
		cat_len = src_len;
	ft_memcpy(dst + dst_len, src, cat_len);
	dst[dst_len + cat_len] = '\0';
	return (src_len + dst_len);
}
