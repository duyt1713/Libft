/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:28:34 by duha              #+#    #+#             */
/*   Updated: 2024/11/25 23:30:35 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_islower - Checks if the given character is a lowercase letter.
 *
 * @c: The character to be checked.
 *
 * This function checks if the given character is a lowercase letter
 * (a-z).
 *
 * Return: non-zero if the character is a lowercase letter, 0 otherwise.
 */
int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
