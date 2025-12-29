/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalorsan <aalorsan@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 01:05:00 by aalorsan          #+#    #+#             */
/*   Updated: 2025/12/24 13:16:13 by aalorsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_string(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			counter++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	return (counter);
}

static int	word_len(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static void	free_all(char **strings, size_t i)
{
	while (i > 0)
		free(strings[--i]);
	free(strings);
}

static char	*alloc_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = word_len(s, c);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;

	if (!s)
		return (NULL);
	strings = malloc(sizeof (char *) * (count_string(s, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			strings[i] = alloc_word(s, c);
			if (!strings[i])
				return (free_all(strings, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	strings[i] = NULL;
	return (strings);
}
/*
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello  world this is 42", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("result[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
/*
static void	print_and_free(char **arr)
{
	size_t	i;

	if (!arr)
	{
		printf("NULL returned\n");
		return ;
	}
	i = 0;
	while (arr[i])
	{
		printf("  [%zu] \"%s\"\n", i, arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	main(void)
{
	printf("TEST 1: normal string\n");
	print_and_free(ft_split("hello world 42", ' '));

	printf("\nTEST 2: multiple separators\n");
	print_and_free(ft_split("///hello///world///", '/'));

	printf("\nTEST 3: leading & trailing spaces\n");
	print_and_free(ft_split("   42   school   ", ' '));

	printf("\nTEST 4: single word\n");
	print_and_free(ft_split("libft", ' '));

	printf("\nTEST 5: empty string\n");
	print_and_free(ft_split("", ' '));

	printf("\nTEST 6: only delimiters\n");
	print_and_free(ft_split("/////", '/'));

	printf("\nTEST 7: delimiter not found\n");
	print_and_free(ft_split("abcdef", ' '));

	printf("\nTEST 8: special character delimiter\n");
	print_and_free(ft_split("one,two,,three,", ','));

	printf("\nTEST 9: newline delimiter\n");
	print_and_free(ft_split("line1\nline2\n\nline3", '\n'));

	printf("\nTEST 10: NULL input\n");
	print_and_free(ft_split(NULL, ' '));

	return (0);
}*/
