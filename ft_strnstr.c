/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * A função ft_strnstr procura pela primeira ocorrência da substring 'little'
 * dentro da string 'big', mas apenas nos primeiros 'len' caracteres de 'big'.
 * Se 'little' for encontrada, retorna um ponteiro para o início da ocorrência
 * em 'big'; caso contrário, retorna NULL. Se 'little' for uma string vazia,
 * a função retorna 'big'.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			++j;
		}
		++i;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	const char	*big = "Este é um exemplo de string.";
	const char	*little = "um";
	size_t		len = 10;
	char		*result;

    result = ft_strnstr(big, little, len);
	if (result)
		printf("Substring encontrada: \"%s\"\n", result);
	else
		printf("Substring não encontrada nos primeiros %zu caracteres.\n", len);
}*/