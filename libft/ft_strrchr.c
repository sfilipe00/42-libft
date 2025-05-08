/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*str = "Exemplo de string para teste.";
	int			c = 'z';
	char		*result;

	result = ft_strrchr(str, c);
	if (result)
		printf("Última ocorrência de '%c' encontrada em: \"%s\"\n", c, result);
	else
		printf("Caractere '%c' não encontrado na string.\n", c);

	return 0;
}*/