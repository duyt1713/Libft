/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:34:47 by duha              #+#    #+#             */
/*   Updated: 2024/11/02 12:47:41 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*string;

	string = (unsigned char *)b;
	while (len > 0)
	{
		*string = (unsigned char)c;
		string++;
		len--;
	}
	return (b);
}
