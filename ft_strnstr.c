/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 01:05:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 14:26:05 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len
			&& haystack[i + j]
			&& haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) & haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char *s = "hello world!";
	char *w = "llo world!";
	char *res = ft_strnstr(s, w, 12);
	if (res)
    		printf("%s\n", res);
	else
    		printf("Not found\n");
}*/
