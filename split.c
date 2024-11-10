/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:46:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/09 16:44:40 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_split - Allocates (with malloc(3)) and returns an array of strings
 *            obtained by splitting ’s’ using the character ’c’ as a delimiter.
 *            The array must end with a NULL pointer.
 *
 * @s: The string to be split.
 * @c: The delimiter character.
 *
 * Return: The array of new strings resulting from the split.
 *         NULL if the allocation fails.
 */

/* char	**ft_split(char const *s, char c)
{
	ft_strtrim(s, c);

} */

/* static char	*ft_strtrim_mod(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	size_t	trim_len;

	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	trim_len = end - start;
	return (start)
 */

/* char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char		*trim;
	size_t		trim_len;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen(s1);
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	trim_len = end - start;
	trim = (char *)malloc(trim_len + 1);
	if (!trim)
		return (NULL);
	ft_memcpy(trim, start, trim_len);
	trim[trim_len] = '\0';
	return (trim);
} */

size_t	ft_count_strings(char const *s, char c)
{
	size_t		len;
	size_t		count;
	char const	*p;

	len = ft_strlen(s);
	p = s;
	count = 0;
	while (*p)
	{
		if (p[0] == c)
			p++;
		if (*p == c)
			count++;
		p++;
	}
	return (count + 1);
}

int main(void)
{
	char const s[] = "///a/b/c//d//";
	char const c = '/';
	char const *cc = &c;
	char *p = ft_strtrim(s, cc);
	printf("%s\n", p);
	free (p);
}
/*
Input: "///a/b/c//d//"
After ft_trim: "a/b/c//d"

*/
