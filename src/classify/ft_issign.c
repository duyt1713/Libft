/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:39:23 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 12:44:33 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_issign - Checks if the given character is a sign ("+" or "-").
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is either a plus ('+') or
 * minus ('-') sign. These signs are typically used as prefixes for
 * signed numbers in string representations of integers.
 *
 * Return: non-zero if the character is a "+" or "-", 0 otherwise.
 */
int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}
