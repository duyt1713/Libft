/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:56:16 by duha              #+#    #+#             */
/*   Updated: 2024/11/14 07:50:52 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

/**
 * ft_calloc - Allocates memory for an array of count elements of size bytes
 *             each and initializes all bytes in the allocated storage to zero.
 *
 * @count: Number of elements to allocate.
 * @size:  Size of each element.
 *
 * This function allocates memory for an array of count elements of size bytes
 * each. The allocated memory is initialized to zero. If the allocation fails,
 * the function returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}
