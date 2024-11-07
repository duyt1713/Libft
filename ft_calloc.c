/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:56:16 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 04:20:08 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

/**
 * ft_calloc - Allocates memory for an array of count elements of size bytes each
 *             and initializes all bytes in the allocated storage to zero.
 * @count: Number of elements to allocate.
 * @size: Size of each element.
 *
 * This function allocates memory for an array of count elements of size bytes each.
 * The allocated memory is initialized to zero. If the allocation fails, the function
 * returns NULL.
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
	if (!(p = malloc(total)))
		return (NULL);
	ft_memset(p, 0, total);
	return (p);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    size_t nmemb = 2;
    size_t size = 2;
    char *p = ft_calloc(2, 2);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Check if the allocated memory is initialized to zero
    for (size_t i = 0; i < nmemb * size; i++)
    {
        if (p[i] != 0)
        {
            printf("Memory not initialized to zero at index %zu\n", i);
            free(p);
            return 1;
        }
    }

    printf("Memory allocation and initialization succeeded\n");

    // Free the allocated memory
    free(p);
    return 0;
} */
