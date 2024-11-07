/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:27:18 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 06:59:28 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strnstr - Locate the first occurrence of the null-terminated string little
 *              in the string big, searching no more than len characters.
 * @big:    Pointer to the null-terminated string to be searched.
 * @little: Pointer to the null-terminated string to be located.
 * @len:    Number of characters to be analyzed.
 *
 * Return: If little is an empty string, big is returned;
 *         if little occurs nowhere in big, NULL is returned;
 *         otherwise a pointer to the first character of
 *         the first occurrence of little is returned.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == 0)
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/* #include <bsd/string.h> //compile with -lbsd tag
int main(void)
{
	const char big[] = "slay kween";
	const char small[] = "sl";
	char *res1 = ft_strnstr(big, small, 2);
	char *res2 = strnstr(big, small, 2);
	printf("ft_strnstr: %s\n", res1);
	printf("strnstr:    %s\n", res2);
	return 0;
} */
