/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:44:00 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:38:26 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncmp - Compares up to n characters of the strings s1 and s2.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * @n:  The maximum number of characters to compare.
 *
 * This function compares the two strings s1 and s2. It compares at most n
 * characters of both strings. The comparison is done lexicographically.
 * If the strings are equal up to the first n characters, the function returns 0.
 * Otherwise, it returns the difference between the first differing characters.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 (or the
 *         first n bytes thereof) is found, respectively, to be less than,
 *         to match, or be greater than s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && n-- > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
