/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:36:29 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 15:57:50 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	result;

        result = 0;
        while (src[result])
                result++;
        if (dsize == 0)
                return (result);
        i = 0;
        while (src[i] && i < dsize - 1)
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (result);
}
/*
int	main(void)
{
	char	dest[10];
	char	src[10];

	dest = "ola";
	src = "banako";
	printf("%ld\n", ft_strlcpy(dest, src, 3));
}*/
