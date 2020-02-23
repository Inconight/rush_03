/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 01:07:43 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 18:31:13 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include "rush.h"

bool	imprime(char *numero, t_dic *dictionary)
{
	int 	i;
	int 	size;
	int 	miles;
	char	*num3;
	bool	error;

	error = false;
	num3 = "000"; 
	printf("entramos en <imprime>\n");
	printf("numero recibido = <%s> ", numero);
	size = 0;
	while (numero[size] != 0)
		size++;
	printf("de %d cifras\n", size);
	if (numero[0] == '0' && size == 1)
		ft_static_print(dic_search(dictionary, "0"), false);
	else
	{
		if (size % 3 != 0)
		{
			numero = ft_char3(numero, size);
			size = size + 3 - (size %3);
		}	
		miles = (size - 1) / 3;
		i = 0;
		while (miles > 0)
		{
			num3 = ft_readstring(numero, i, 3);
			error = (error || imprime_cifras(dictionary, num3));

			error = (error || imprime_miles(dictionary, miles, num3));
			i = i + 3;
			miles--;
		}
		num3 = ft_readstring(numero, i, 3);
		error = (error || imprime_cifras(dictionary, num3));
	}
	return (error);
}
