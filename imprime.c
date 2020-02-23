/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 01:07:43 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 06:04:44 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush.h"

void	imprime(char *numero, t_dic *dictionary)
{
	int 	i;
	int 	size;
	int 	miles;
	char	*num3;
	   
	num3 = "000"; 
	printf("entramos en <imprime>\n");
	printf("numero recibido = <%s> ", numero);
	size = 0;
	while (numero[size] != 0)
		size++;
	printf("de %d cifras\n", size);
	if (numero[0] == '0' && size == 1)
		dic_search(dictionary, "0");
	else
	{
		if (size % 3 != 0)
		{
			numero = ft_char3(numero, size);
			size = size + 3 - (size %3);
		}
		
		miles = (size - 1) / 3;
		printf("numero modificado = <%s> ", numero);
		printf("de %d cifras\nmiles %i\n", size, miles);

		i = 0;
		while (miles > 0)
		{
			num3 = ft_readstring(numero, i, 3);
			imprime_cifras(dictionary, num3);
			imprime_miles(dictionary, miles, num3);
			i = i + 3;
			miles--;
		}
		num3 = ft_readstring(numero, i, 3);
		imprime_cifras(dictionary, num3);
	}
}
