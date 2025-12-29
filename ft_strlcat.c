/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:41:41 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 12:30:40 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	get_result(size_t dlen, size_t slen, size_t dsize)
{
	if (dsize <= dlen)
		return (slen + dsize);
	return (slen + dlen);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i] && i < dsize)
		i++;
	while (src[j] && (i + 1) < dsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < dsize)
		dest[i] = '\0';
	return (get_result(dlen, slen, dsize));
}
/*
int	main(void)
{
	char	dest[10] = "amal";
	char	*src = "abd";
	size_t	s = 2;

	printf("%ld\n", ft_strlcat (dest, src, s));
}*/
