/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:31 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 06:31:50 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_strtrim - Allocates (with malloc(3)) and returns a copy of ’s1’ with
 *              the characters specified in ’set’ removed from the beginning
 *              and the end of the string.
 *
 * @s1: The string to be trimmed.
 * @set: The reference set of characters to trim.
 *
 * Return: The trimmed string, or NULL if the allocation fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	trim_len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	trim_len = end - start;
	trim = (char *)malloc(trim_len + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, start, trim_len);
	trim[trim_len] = '\0';
	return (trim);
}
/* int main(void)
{
	char const s1[] = "abbabablmaobbababa";
	char const set[] = "ab";
	char *p = ft_strtrim(s1, set);
	printf("%s\n", p);
	free (p);
} */
