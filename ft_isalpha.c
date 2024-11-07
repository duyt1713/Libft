/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:55 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 00:57:02 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalpha - Checks if the given character is an alphabetic letter.
 * @c: The character to be checked.
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

/**
 * ft_isupper - Checks if the given character is an uppercase letter.
 * @c: The character to be checked.
 *
 * This function checks if the given character is an uppercase letter
 * (A-Z).
 *
 * Return: non-zero if the character is an uppercase letter, 0 otherwise.
 */

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

/**
 * ft_islower - Checks if the given character is a lowercase letter.
 * @c: The character to be checked.
 *
 * This function checks if the given character is a lowercase letter
 * (a-z).
 *
 * Return: non-zero if the character is a lowercase letter, 0 otherwise.
 */

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z'));
}
