/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 01:07:43 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 23:34:28 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "rush.h"

bool	imprime2(char *numero, t_dic *dict, int size)
{
	int		i;
	bool	error;
	int		miles;
	char	*num3;

	error = true;
	num3 = "000";
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
		imprime_cifras(dict, num3);
		ft_static_print(imprime_miles(dict, miles, num3), false);
		i += 3;
		miles--;
	}
	num3 = ft_readstring(numero, i, 3);
	imprime_cifras(dict, num3);
	return (error);
}

bool	imprime(char *numero, t_dic *dict)
{
	int		size;
	bool	error;

	error = true;
	size = 0;
	while (numero[size] != 0)
		size++;
	if (numero[0] == '0' && size == 1)
	{
		ft_static_print(dic_search(dict, "0"), false);
		error = true;
	}
	else
	{
		error = imprime2(numero, dict, size);
	}
	return (error);
}
