/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:34:58 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:03:33 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlen - Calculates the length of a string.
 * 
 * @s: The string whose length is to be calculated.
 *
 * This function calculates the length of the string pointed to by s,
 * excluding the terminating null byte ('\0').
 *
 * Return: The number of characters in the string pointed to by s.
 */

size_t	ft_strlen(const char *s)
{
	const char	*start = s;

	while (*s)
		s++;
	return (s - start);
}
