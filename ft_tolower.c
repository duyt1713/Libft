/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:30 by duha              #+#    #+#             */
/*   Updated: 2024/11/10 22:39:26 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_tolower - Converts an uppercase letter to a lowercase letter.
 *
 * @c: The character to be converted.
 *
 * Helper function:
 * ft_isupper: Checks if a character is a uppercase letter.
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

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}
