/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:22:46 by duha              #+#    #+#             */
/*   Updated: 2024/11/25 23:26:59 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isspace - Checks if the given character is a whitespace character.
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is a whitespace character.
 * These characters are space (' '), horizontal tab ('\t'), newline ('\n'),
 * vertical tab ('\v'), form feed ('\f'), and carriage return ('\r').
 *
 * Return: non-zero if the character is a whitespace character, 0 otherwise.
 */
int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\v' || c == '\f' || c == '\r');
}
