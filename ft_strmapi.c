/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:34:22 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 06:39:16 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * ft_strmapi - Applies the function ’f’ to each character of the string ’s’
 *              to create a new string resulting from successive applications of ’f’.
 *
 * @s: The string on which to iterate.
 * @f: The function to apply to each character.
 *
 * Return: The string created from the successive applications of ’f’.
 *         NULL if the allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	p = (char *)malloc(ft_strlen(s) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/* char ft_plus_a(unsigned int a, char c)
{
	c += a;
	return c;
}
int main(void)
{
	char s[] = "0000000000";
	char *result = ft_strmapi(s, ft_plus_a);
	if (result)
	{
		printf("%s\n", result); // Expected output: "0123456789"
		free(result);
	}
	return 0;
} */
