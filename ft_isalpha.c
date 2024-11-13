/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:55 by duha              #+#    #+#             */
/*   Updated: 2024/11/13 04:36:51 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalpha - Checks if the given character is an alphabetic letter.
 *
 * @c: The character to be checked.
 *
 * Helper functions:
 * ft_isupper: Checks if a character is a uppercase letter.
 * ft_islower: Checks if a character is a lowercase letter.
 *
 * This function checks if the given character is an alphabetic letter,
 * either uppercase (A-Z) or lowercase (a-z). It uses the ft_isupper
 * function to check for uppercase letters and the ft_islower function
 * to check for lowercase letters.
 *
 * Return: non-zero if the character is an alphabetic letter, 0 otherwise.
 */

static int	ft_isupper(int c);
static int	ft_islower(int c);

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
