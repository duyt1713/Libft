/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:05 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 03:01:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_strdup - Duplicates a string by allocating memory and copying the content.
 * @s1: The string to be duplicated.
 *
 * This function allocates sufficient memory for a copy of the string s1,
 * does the copy, and returns a pointer to it. The memory allocated for the
 * new string is obtained with malloc, and can be freed with free.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */

char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*p;

	if (!(s2 = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	p = s2;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (s2);
}
