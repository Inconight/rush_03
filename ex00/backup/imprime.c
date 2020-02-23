/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 01:07:43 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:10:09 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	*ret = 0;

	error = true;
	num3 = "000"; 
	size = 0;
	while (numero[size] != 0)
		size++;
	if (numero[0] == '0' && size == 1)
	{
		ft_static_print(dic_search(dictionary, "0"), false);
		error = true;
	}
	else
	{
		if (size % 3 != 0)
		{
			numero = ft_char3(numero, size);
			size = size + 3 - (size % 3);
		}	
		miles = (size - 1) / 3;
		i = 0;
		while (miles > 0)
		{
			num3 = ft_readstring(numero, i, 3);
			imprime_cifras(dictionary, num3);
			ret = imprime_miles(dictionary, miles, num3);
			ft_static_print(ret, false);
			i += 3;
			miles--;
		}
		num3 = ft_readstring(numero, i, 3);
		imprime_cifras(dictionary, num3);
	}
	return (error);
}
