/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:30 by duha              #+#    #+#             */
/*   Updated: 2025/01/09 18:30:31 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * ft_tolower - Converts an uppercase letter to a lowercase letter.
 *
 * @c: The character to be converted.
 *
 * This function converts an uppercase letter to the corresponding
 * lowercase letter. If the character is not an uppercase letter,
 * it is returned unchanged.
 *
 * Return: The lowercase equivalent of the character if it is an
 *         uppercase letter, otherwise the character itself.
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	else
		return (c);
}
