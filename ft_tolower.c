/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:30 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:03:06 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_tolower - Converts an uppercase letter to a lowercase letter.
 *
 * @c: The character to be converted.
 *
 * This function converts an uppercase letter to the corresponding
 * lowercase letter. If the character is not an uppercase letter,
 * it is returned unchanged.
 *
 * Return: The lowercase equivalent of the character if it is an
 *         uppercase letter, otherwise the character itself.
 */

static int	ft_isupper(int c);

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	else
		return (c);
}
/**
 * ft_isupper - Checks if the given character is an uppercase letter.
 * 
 * @c: The character to be checked.
 *
 * This function checks if the given character is an uppercase letter
 * (A-Z).
 *
 * Return: non-zero if the character is an uppercase letter, 0 otherwise.
 */

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}
