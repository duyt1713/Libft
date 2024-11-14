/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:55:52 by duha              #+#    #+#             */
/*   Updated: 2024/11/14 07:53:06 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strchr - Locate the first occurrence of c (converted to an unsigned char)
 *             in the string pointed to by s.
 *
 * @s: Pointer to the null-terminated string to be searched.
 * @c: Character to be located.
 *
 * Return: A pointer to the matching character or NULL if the character does not
 *         occur in the given string.
 */
char	*ft_strchr(const char *s, int c)
{
	const unsigned char	*p;

	p = (const unsigned char *)s;
	while (*p)
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
	}
	if ((unsigned char)c == 0)
		return ((char *)p);
	return (NULL);
}
