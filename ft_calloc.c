/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:12:43 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/11 13:05:57 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	sum = nmemb * size;
	if (size && sum / size != nmemb)
		return (NULL);
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*ptr = (char *)ft_calloc(1, sizeof(char));

	if (!ptr)
	{
		printf("Erro ao alocar memória.\n");
		return (1);
	}
	printf("Valor inicial: %d\n", *ptr);
	*ptr = 'C';

	printf("Novo valor: %c\n", *ptr);

	free(ptr);
}*/