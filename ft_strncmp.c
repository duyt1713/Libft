/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:44:00 by duha              #+#    #+#             */
/*   Updated: 2024/11/02 13:27:57 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

int	main(void)
{
	printf("%i\n", ft_strncmp("Duy", "duy", 6));
	printf("%i\n", ft_strncmp("Duy", "DUy", 2));
	printf("%i\n", ft_strncmp("Duy", "Duyy", 6));
	printf("%i\n", ft_strncmp("Duyy", "Duy", 3));
	printf("%i\n", ft_strncmp("Duy", "Duy", 5));
	return (0);
}
