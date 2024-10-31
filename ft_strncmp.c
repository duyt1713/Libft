/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:44:00 by duha              #+#    #+#             */
/*   Updated: 2024/10/31 10:22:34 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_strncmp("Duy", "duy", 6));
	printf("%i\n", ft_strncmp("Duy", "DUy", 2));
	printf("%i\n", ft_strncmp("Duy", "Duyy", 6));
	printf("%i\n", ft_strncmp("Duyy", "Duy", 3));
	printf("%i\n", ft_strncmp("Duy", "Duy", 5));
	return (0);
}
