/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:07:41 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:03:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strrchr - Locate the last occurrence of c (converted to an unsigned char)
 *              in the string pointed to by s.
 * 
 * @s: Pointer to the null-terminated string to be searched.
 * @c: Character to be located.
 *
 * Return: A pointer to the matching character or NULL if the character does not
 *         occur in the given string.
 */

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	*p;

	p = (const unsigned char *)s + ft_strlen(s);
	while (p >= (const unsigned char *)s)
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
/* int main(void)
{
	char *s = "Hello, world!";
	char *p;
	p = ft_strrchr(s, 'l');
	printf("ft_strrchr: %s\n", p);
	p = strrchr(s, 'l');
	printf("strrchr: %s\n", p);
	return (0);
} */
