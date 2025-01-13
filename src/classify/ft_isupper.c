/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:29:39 by duha              #+#    #+#             */
/*   Updated: 2025/01/13 11:48:20 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}
