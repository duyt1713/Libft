/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:50:38 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:34:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdlib.h>

/**
 * ft_substr - Allocates (with malloc(3)) and returns a substring from
 *             the string ’s’. The substring begins at index ’start’
 *             and is of maximum size ’len’.
 *
 * @s:     The string from which to create the substring.
 * @start: The start index of the substring in the string ’s’.
 * @len:   The maximum length of the substring.
 *
 * Return: The substring, or NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*p;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
