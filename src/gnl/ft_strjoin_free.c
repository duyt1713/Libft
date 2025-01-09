/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:21:27 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:30:19 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include <stdlib.h>

/**
 * ft_strjoin_free - Allocates (with malloc(3)) and returns a new string,
 *                   which is the result of the concatenation of ’s1’ and ’s2’.
 *                   The string ’s1’ is then freed.
 *
 * Usage: In get_next_line.
 *
 * @s1: The prefix string.
 * @s2: The suffix string.
 *
 * Return: The new string, or NULL if the allocation fails.
 */
char	*ft_strjoin_free(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	ft_memmove(res, s1, len1);
	ft_memmove(res + len1, s2, len2);
	res[len1 + len2] = '\0';
	free(s1);
	return (res);
}
