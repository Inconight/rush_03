/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprime_cifras.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:02:20 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 23:04:34 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

bool	imprime_cifras(t_dic *dict, char *num3)
{
	char *ret;

	if (num3[0] != '0')
	{
		if ((ret = imprime_centena(dict, num3)) == NULL)
			return (false);
		else
			ft_static_print(ret, false);
	}
	if (num3[1] != '0')
	{
		if ((ret = imprime_decena(dict, num3)) == NULL)
			return (false);
		else
			ft_static_print(ret, false);
	}
	if (num3[1] != '1' && num3[2] != '0')
	{
		if ((ret = imprime_unidad(dict, num3)) == NULL)
			return (false);
		else
			ft_static_print(ret, false);
	}
	return (true);
}

char	*imprime_unidad(t_dic *dict, char *numero)
{
	char	*p_char;
	char	*ret;

	p_char = malloc(2);
	if (p_char != NULL)
	{
		p_char[0] = numero[2];
		p_char[1] = '\0';
	}
	ret = dic_search(dict, p_char);
	free(p_char);
	return (ret);
}

char	*imprime_decena(t_dic *dict, char *numero)
{
	char	*p_char;
	char	*ret;

	ret = NULL;
	p_char = malloc(3);
	if (p_char != NULL)
	{
		p_char[0] = numero[1];
		p_char[1] = numero[2];
		p_char[2] = '\0';
	}
	if (numero[1] == '1')
		ret = dic_search(dict, p_char);
	else if (numero[1] != '0')
	{
		p_char[1] = '0';
		ret = dic_search(dict, p_char);
	}
	free(p_char);
	return (ret);
}

char	*imprime_centena(t_dic *dict, char *numero)
{
	char	*p_char;
	char	*digit;
	char	*cents;

	p_char = malloc(2);
	if (p_char)
	{
		p_char[0] = numero[0];
		p_char[1] = '\0';
	}
	digit = dic_search(dict, p_char);
	cents = dic_search(dict, "100");
	free(p_char);
	return (ft_strjoin(digit, cents, ' '));
}

char	*imprime_miles(t_dic *dict, int ceros, char *before)
{
	char	*p_char;
	int		size;
	int		i;
	char	*ret;

	ret = NULL;
	if (before[0] != '0' || before[1] != '0' || before[2] != '0')
	{
		size = ceros * 3 + 1;
		i = 1;
		p_char = malloc(size);
		if (p_char != NULL)
			p_char[0] = '1';
		while (i < size)
		{
			p_char[i++] = '0';
		}
		p_char[i] = '\0';
		ret = dic_search(dict, p_char);
		free(p_char);
	}
	return (ret);
}
