/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfilipe- <sfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:55:15 by sfilipe-          #+#    #+#             */
/*   Updated: 2025/04/10 09:22:08 by sfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*#include <stdio.h>
int	main(void)
{
	char	letra_maiuscula = 'Z';
	char	letra_minuscula;
	char	caractere_nao_letra = '9';

	letra_minuscula = ft_tolower(letra_maiuscula);
	printf("Org: %c, Cnvt: %c\n", letra_maiuscula, letra_minuscula);
	letra_minuscula = ft_tolower(caractere_nao_letra);
	printf("Org: %c, Cnvt: %c\n", caractere_nao_letra, letra_minuscula);
}*/