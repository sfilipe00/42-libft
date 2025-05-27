/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/11 10:30:26 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int i)
{
	if (!((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')
			|| (i >= '0' && i <= '9')))
		return (0);
	return (1);
}
/*
#include <stdio.h>
int main()
{
	char *a = "aAA--";
	char *b = "aAbb";
	char *c = "aAA000";

	printf("%s é? %d\n", a, ft_isalnum(a));
	printf("%s é? %d\n", b, ft_isalnum(b));
	printf("%s é? %d\n", c, ft_isalnum(c));
}*/