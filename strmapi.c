/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:26:22 by duha              #+#    #+#             */
/*   Updated: 2024/11/05 21:28:52 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strmapi - Applies the function ’f’ to each character of the string ’s’,
 *              and passing its index as first argument to create a new string
 *              (with malloc(3)) resulting from successive applications of ’f’.
 *
 * @s: The string on which to iterate.
 * @f: The function to apply to each character.
 *
 * Return: The string created from the successive applications of ’f’.
           NULL if the allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	
}
