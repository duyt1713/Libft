/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:46:25 by duha              #+#    #+#             */
/*   Updated: 2024/11/25 23:12:18 by duha             ###   ########.fr       */
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
 * ft_strs_len:    Counts the number of substrings separated by the delimiter.
 * ft_strlen_deli: Calculates the length of a substring until the delimiter.
 * ft_strings_cpy: Copies the substrings into the allocated memory.
 *
 * Return: The array of new strings resulting from the split.
 *         NULL if the allocation fails.
 */
char			**ft_split(char const *s, char c);
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
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
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
	size_t	len;
	char	**start;

	start = p;
	while (*s && count > 0)
	{
		if (*s == c)
			s++;
		else
		{
			len = ft_strlen_deli(s, c);
			*p = (char *)malloc(len + 1);
			if (!*p)
			{
				while (p > start)
					free(*--p);
				return ;
			}
			ft_memcpy(*p, s, len);
			(*p)[len] = '\0';
			s += len;
			p++;
			count--;
		}
	}
}
