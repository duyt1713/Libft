/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:21:27 by duha              #+#    #+#             */
/*   Updated: 2024/11/05 12:54:26 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strjoin - Allocates (with malloc(3)) and returns a new string,
 *              which is the result of the concatenation of ’s1’ and ’s2’.
 *
 * @s1: The prefix string.
 * @s2: The suffix string.
 *
 * Return: The new string, or NULL if the allocation fails.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = (char *)malloc(s1_len + s2_len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, s1_len + 1);
	ft_strlcat(p, s2, s1_len + s2_len + 1);
	return (p);
}
/* int main(void)
{
	char const s1[] = "slay";
	char const s2[] = "kween";
	char *p = ft_strjoin(s1, s2);
	if (p)
	{
		printf("%s\n", p);
		free(p);
	}
} */
