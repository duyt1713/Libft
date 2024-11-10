/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:46:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/10 23:33:58 by duha             ###   ########.fr       */
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
 * Helper functions:
 * ft_strs_len: Counts the number of substrings separated by the delimiter.
 * ft_strlen_deli: Calculates the length of a substring until the delimiter.
 * ft_strings_copy: Copies the substrings into the allocated memory.
 *
 * Return: The array of new strings resulting from the split.
 *         NULL if the allocation fails.
 */

static size_t	ft_strs_len(char const *s, char c);
static size_t	ft_strlen_deli(char const *s, char c);
static void		ft_strs_cpy(char const *s, char c, char **p, size_t count);

char	**ft_split(char const *s, char c)
{
	size_t	strings;
	char	**p;

	if (!s)
		return (NULL);
	strings = ft_strs_len(s, c);
	p = (char **)malloc((strings + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	ft_strs_cpy(s, c, p, strings);
	p[strings] = NULL;
	return (p);
}

static size_t	ft_strs_len(char const *s, char c)
{
	size_t		count;
	char const	*p;

	count = 0;
	p = s;
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

static size_t	ft_strlen_deli(char const *s, char c)
{
	const char	*start = s;

	while (*s && *s != c)
		s++;
	return (s - start);
}

static void	ft_strs_cpy(char const *s, char c, char **p, size_t count)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s && i < count)
	{
		if (*s == c)
			s++;
		else
		{
			len = ft_strlen_deli(s, c);
			p[i] = (char *)malloc(len + 1);
			if (!p[i])
			{
				while (i > 0)
					free(p[--i]);
				free(p);
				return ;
			}
			ft_memcpy(p[i], s, len);
			p[i][len] = '\0';
			s += len;
			i++;
		}
	}
}

/* int main(void)
{
    char **result;
    size_t i;

    result = ft_split("///aff/bs/dffs//csdf///", '/');
    if (result)
    {
        for (i = 0; result[i] != NULL; i++)
        {
            printf("String %zu: %s\n", i, result[i]);
            free(result[i]);
        }
        free(result);
    }
    return 0;
} */