/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:38 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 00:55:31 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_toupper - Converts a lowercase letter to an uppercase letter.
 * @c: The character to be converted.
 *
 * This function converts a lowercase letter to the corresponding
 * uppercase letter. If the character is not a lowercase letter,
 * it is returned unchanged.
 *
 * Return: The uppercase equivalent of the character if it is a
 *         lowercase letter, otherwise the character itself.
 */

static int	ft_islower(int c);

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	else
		return (c);
}

/**
 * ft_islower - Checks if the given character is a lowercase letter.
 * @c: The character to be checked.
 *
 * This function checks if the given character is a lowercase letter
 * (a-z).
 *
 * Return: non-zero if the character is a lowercase letter, 0 otherwise.
 */

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
