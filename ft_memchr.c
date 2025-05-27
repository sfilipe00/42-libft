/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char str[] = "Olá, mundo!";
	char c = 'l';
	size_t n = 10;

	char *resultado = ft_memchr(str, c, n);

	if (resultado != NULL)
	{
		printf("Caractere '%c' encontrado: \"%s\"\n", c, resultado);
	}
	else
	{
		printf("Caractere '%c' não encontrado nos primeiros %zu bytes.\n", c, n);
	}
}*/