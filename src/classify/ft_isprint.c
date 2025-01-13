/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:32:14 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 11:48:15 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_isprint - Checks if the given character is printable.
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is a printable character,
 * which includes all characters from the ASCII space character (32) to
 * the ASCII tilde character (126) inclusive.
 *
 * Return: non-zero if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
