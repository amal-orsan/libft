/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:52:30 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 14:53:58 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
	{
		return (NULL);
	}
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free (temp);
	return (dest);
}
/*
#include <stdio.h>

int main() {
    char buf[20] = "HelloWorld";

    // Overlapping move
    ft_memmove(buf + 2, buf, 10);

    printf("%s\n", buf);  // Output: HeHelloWorld
    return 0;
}*/
