/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:31:46 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 23:29:11 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isascii - Checks if the given character is an ASCII character.
 * @c: The character to be checked.
 *
 * This function checks if the given character is an ASCII character,
 * which means it falls within the range of 0 to 127 inclusive.
 *
 * Return: non-zero if the character is an ASCII character, 0 otherwise.
 */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
