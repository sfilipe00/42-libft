/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*#include <stdio.h>
int	main(void)
{
	char	letra_minuscula = 'g';
	char	letra_maiuscula;
	char	caractere_nao_letra = '5';

	letra_maiuscula = ft_toupper(letra_minuscula);
	printf("Org: %c, Cnvt: %c\n", letra_minuscula, letra_maiuscula);
	letra_maiuscula = ft_toupper(caractere_nao_letra);
	printf("Org: %c, Cnvt: %c\n", caractere_nao_letra, letra_maiuscula);
}*/