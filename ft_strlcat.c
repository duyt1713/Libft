/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:02:21 by duha              #+#    #+#             */
/*   Updated: 2024/11/04 23:06:25 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	dst += dst_len;
	size -= dst_len;
	ft_strlcpy(dst, src, size);
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
