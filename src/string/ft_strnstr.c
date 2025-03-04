/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:27:18 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:34:11 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_strnstr - Locate the first occurrence of the null-terminated string little
 *              in the string big, searching no more than len characters.
 *
 * @big:    Pointer to the null-terminated string to be searched.
 * @little: Pointer to the null-terminated string to be located.
 * @len:    Number of characters to be analyzed.
 *
 * Return: If little is an empty string, big is returned;
 *         if little occurs nowhere in big, NULL is returned;
 *         otherwise a pointer to the first character of
 *         the first occurrence of little is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!big && !little)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
