/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:13:35 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int s)
{
	if (s >= '0' && s <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("ft_isdigit(97): %d\n", ft_isdigit(97));
    printf("ft_isdigit(49): %d\n", ft_isdigit(49));
}*/