/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:51:27 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:09:17 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

char	*clean_number(char *str)
{
	int	i; 
	int p_inicial;
	int digitos;
	char	*numero;
	i = 0;
	digitos = 0;
	str = ft_removespc_left(str);
	str = ft_removespc_right(str);

	if (str[i] != 0 && str[i] == '+')
		i++;
	while (str[i] == '0')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
			break;
	}
	p_inicial = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		digitos++;
	}
	if (str[i] != 0 || digitos == 0)
		return (0);
	else
	{
		numero = malloc (digitos +1);
		if (numero == 0)
			return (0);
		else
		{
			i = 0;
			while (str[p_inicial + i] != 0)
			{
				numero[i] = str[p_inicial + i];
				i++;
			}
			numero[i] = 0;
		}
	}
	return (numero);
}
