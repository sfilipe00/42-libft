/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/11 13:08:25 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int s)
{
	return (s >= 0 && s <= 127);
}
/*
#include <stdio.h>
int main(void)
{
    printf("ft_isascii(65): %d\n", ft_isascii(65));
    printf("ft_isascii(200): %d\n", ft_isascii(200));
    printf("ft_isascii(-5): %d\n", ft_isascii(-5));
}*/