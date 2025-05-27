/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int i)
{
	if (!((i >= 'a' && i <= 'z')
			|| (i >= 'A' && i <= 'Z')))
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char	*t1 = "T stndo";
	char	*t2 = "Testndo";
	char	*t3 = "T0estndo";

	printf("%s é alpha? %d\n", t1, ft_isalpha(t1));
	printf("%s é alpah? %d\n", t2, ft_isalpha(t2));
	printf("%s é alpah? %d\n", t3, ft_isalpha(t3));

}*/