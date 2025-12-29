/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:00:37 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 14:51:34 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char s[20] = "amal";
	ft_memset(s, 'A', 6);
	printf("%s\n", s);

}*/
/*
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n);

int main(void)
{
    char a[20] = "Hello World!";
    char b[20] = "Hello World!";

    printf("Before:\n");
    printf("a = %s\n", a);
    printf("b = %s\n\n", b);

    // Apply standard memset
    memset(a, '*', 5);

    // Apply your ft_memset
    ft_memset(b, '*', 5);

    printf("After memset / ft_memset:\n");
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    // Compare results
    if (strcmp(a, b) == 0)
        printf("\nOK: ft_memset matches memset\n");
    else
        printf("\nERROR: ft_memset does not match memset\n");

    return 0;
}*/
