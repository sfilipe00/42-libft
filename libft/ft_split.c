/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	j = 0;
	words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}
/*#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("ola tudo bem,como vai voce?", ' ');
	if (!result)
	{
		printf("Erro ao dividir a string.\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Palavra %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/