/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:12:51 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 14:59:26 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	inset(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && inset(set, s1[start]))
		start++;
	if (end != 0)
		end--;
	while (end > start && inset(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	new = ft_substr(s1, start, (end - start + 1));
	return (new);
}
/*
static void test(char *s1, char *set)
{
    char *res;

    res = ft_strtrim(s1, set);
    if (!res)
        printf("NULL\n");
    else
    {
        printf("s1=\"%s\" | set=\"%s\" => \"%s\"\n", s1, set, res);
        free(res);
    }
}

int main(void)
{
    test("  hello  ", " ");
    test("xxxx", "x");
    test("", " ");
    test("abc", "xyz");
    test(" \n\t42AbuDhabi\t\n ", " \n\t");
    test("424242hello4242", "42");
    test("      ", " ");
    test("libft", "");

    return (0);
}*/
