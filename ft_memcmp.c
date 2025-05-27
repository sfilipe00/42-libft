/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    const char *s1 = "Hello, world!";
    const char *s2 = "Hello, world!";

	const char *s3 = "Hello, Wxrld!";
    int res1 = ft_memcmp(s1, s2, strlen(s1) + 1);
    printf("Comparando s1 com s2: %d\n", res1);
    int res2 = ft_memcmp(s1, s3, strlen(s1) + 1);
    printf("Comparando s1 com s3: %d\n", res2);
}*/