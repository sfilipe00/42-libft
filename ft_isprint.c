/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/11 10:32:25 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int s)
{
	return (s >= 32 && s <= 126);
}
/*
#include <stdio.h>
int main(void)
{
    printf("ft_isprint(10): %d\n", ft_isprint(10));
    printf("ft_isprint(98): %d\n", ft_isprint(98));
}*/