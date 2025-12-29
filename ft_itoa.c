/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:26:43 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 10:36:44 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_digit(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*result;
	int		len;

	num = n;
	len = get_digit(num);
	result = malloc(sizeof (char) * (len + 1));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (num == 0)
		return (result[0] = '0', result);
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		result[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
/*
int main(void)
{
    char *s;

    s = ft_itoa(0);
    printf("0        -> %s\n", s);
    free(s);

    s = ft_itoa(42);
    printf("42       -> %s\n", s);
    free(s);

    s = ft_itoa(123456);
    printf("123456   -> %s\n", s);
    free(s);

    s = ft_itoa(-42);
    printf("-42      -> %s\n", s);
    free(s);

    s = ft_itoa(-987654);
    printf("-987654  -> %s\n", s);
    free(s);

    s = ft_itoa(2147483647);
    printf("INT_MAX  -> %s\n", s);
    free(s);

    s = ft_itoa(-2147483648);
    printf("INT_MIN  -> %s\n", s);
    free(s);

    return 0;
}*/
