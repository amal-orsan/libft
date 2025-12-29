/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:15:34 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 16:03:24 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int     ft_atoi(const char *nptr)
{
        int     s;
        int     i;
        int     c;

        c = 0;
        s = 1;
        i = 0;
        while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
                i++;
        if (nptr[i] == '-' || nptr[i] == '+')
        {
                if (nptr[i] == '-')
                        s = -1;
                i++;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
                c = c * 10 + (nptr[i] - '0');
                i++;
        }
        return (s * c);
}
/*
int	main(void)
{
	char	*s;

	s = "    \n\n\v\f\r\t -5234AAAgreghrsth444";
	printf("%d\n", ft_atoi(s));
}*/
