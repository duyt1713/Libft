/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:20:11 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:03:39 by duha             ###   ########.fr       */
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
/* int main(void)
{
    char src[] = "Hello, World!";
    char dst1[20] = "Pre-filled buffer";
    char dst2[10] = "Pre-filled";
    char dst3[5] = "Pre";
    size_t len;

    // Test case 1: Destination buffer is large enough
    len = ft_strlcpy(dst1, src, 3);
    printf("Test 1:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst1);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen(src));

    // Test case 2: Destination buffer is smaller than source
    len = ft_strlcpy(dst2, src, sizeof(dst2));
    printf("Test 2:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst2);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen(src));

    // Test case 3: Destination buffer is very small
    len = ft_strlcpy(dst3, src, sizeof(dst3));
    printf("Test 3:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst3);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen(src));

    // Test case 4: Size is 0
    len = ft_strlcpy(dst1, src, 0);
    printf("Test 4:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst1); // dst1 should remain unchanged
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n", ft_strlen(src));

    return 0;
} */
