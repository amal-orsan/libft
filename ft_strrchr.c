/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:08:45 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 15:40:38 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}
/*
int	main(void)
{
	const char	*text;
	char		*p1;

	text = "hello";
	p1 = strrchr(text, 'o');
	if (p1 != NULL)
		printf("Found at: %ld\n", p1 - text);
	else
		printf("NOT Found");
}*/
