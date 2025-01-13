/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:31:46 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 11:48:08 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_isascii - Checks if the given character is an ASCII character.
 *
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
