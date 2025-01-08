/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:25:05 by duha              #+#    #+#             */
/*   Updated: 2025/01/08 11:39:40 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * ft_strdup - Duplicates a string by allocating memory and copying the content.
 *
 * @s1: The string to be duplicated.
 *
 * This function allocates sufficient memory for a copy of the string s1,
 * does the copy, and returns a pointer to it. The memory allocated for the
 * new string is obtained with malloc, and can be freed with free.
 *
 * Return: A pointer to the duplicated string,
 *         or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_memmove(dup, s1, len);
	dup[len] = '\0';
	return (dup);
}
