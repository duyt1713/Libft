/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:32:12 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:37:05 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isdigit - Checks if the given character is a digit.
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is a digit (0-9).
 *
 * Return: non-zero if the character is a digit, 0 otherwise.
 */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
