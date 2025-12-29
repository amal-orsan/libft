/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 01:05:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 16:07:35 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count != 0 && (count * size) / count != size)
		return (NULL);
	total = count * size;
	if (total == 0)
		total = 1;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr,total);
	return (ptr);
}
/*
int main()
{
    int *arr;
    size_t n = 5;
    size_t i;

    arr = ft_calloc(n, sizeof(int));
    if (!arr)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Values after ft_calloc:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);

    return 0;
}*/
