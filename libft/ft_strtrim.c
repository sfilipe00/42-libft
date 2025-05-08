/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	sublen;
	char	*trimmed;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	if (i == len)
		return (ft_strdup(""));
	j = len - 1;
	while (j > i && is_set(s1[j], set))
		j--;
	sublen = j - i + 1;
	trimmed = (char *)malloc(sizeof(char) * (sublen + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, sublen);
	trimmed[sublen] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char const *original = "  \t\nOlá, mundo! \n\t ";
    char const *set = " \n\t";
    char *resultado;

    resultado = ft_strtrim(original, set);
    if (!resultado) {
        printf("Erro ao remover caracteres.\n");
        return 1;
    }

    printf("String original: \"%s\"\n", original);
    printf("String após ft_strtrim: \"%s\"\n", resultado);
    free(resultado);
    return 0;
}*/