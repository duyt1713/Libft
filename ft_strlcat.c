/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:02:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 06:55:58 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlcat - Concatenates the string src to the end of dst, ensuring that the
 *              result is null-terminated and does not exceed size bytes.
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
/* int main(void)
{
    char src[] = "World!";
    char dst1[20] = "Hello, ";
    char dst2[15] = "Hello, ";
    char dst3[10] = "Hello, ";
    char dst4[5] = "Hi";
    char dst5[10] = "Hello, ";
    size_t len;

    // Test case 1: Destination buffer is large enough
    len = ft_strlcat(dst1, src, sizeof(dst1));
    printf("Test 1:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst1);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen("Hello, ") + ft_strlen(src));

    // Test case 2: Destination buffer is smaller than source
    len = ft_strlcat(dst2, src, sizeof(dst2));
    printf("Test 2:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst2);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen("Hello, ") + ft_strlen(src));

    // Test case 3: Destination buffer is very small
    len = ft_strlcat(dst3, src, sizeof(dst3));
    printf("Test 3:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst3);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen("Hello, ") + ft_strlen(src));

    // Test case 4: Destination buffer is too small to hold any of the source
    len = ft_strlcat(dst4, src, sizeof(dst4));
    printf("Test 4:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst4);
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", ft_strlen("Hi") + ft_strlen(src));

    // Test case 5: Size is smaller than dst_len
    len = ft_strlcat(dst5, src, 5);
    printf("Test 5:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst5); // dst5 should remain unchanged
    printf("Returned length: %zu\n", len);
    printf("Expected length: %zu\n\n", 5 + ft_strlen(src));

    return 0;
} */
