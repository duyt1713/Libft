/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:38 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:38:37 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_toupper - Converts a lowercase letter to an uppercase letter.
 *
 * @c: The character to be converted.
 *
 * Helper function:
 * ft_islower: Checks if a character is a lowercase letter.
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

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
