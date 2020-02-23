/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removespc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:40:27 by mrubio            #+#    #+#             */
/*   Updated: 2020/02/23 05:17:28 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"
#include <stdbool.h>

char	*ft_removespc_left(char *str)
{
	int		i;
	int		pos_ini;
	int		size;
	char	*resultado;

	resultado = 0;
	i = 0;
	while (str[i] != 0 && (str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	pos_ini = i;
	while (str[i] != '\0')
		i++;
	size = i - pos_ini;
	resultado = malloc(size + 1);
	if (resultado == 0)
		return (NULL);
	i = 0;
	while (str[pos_ini + i] != '\0')
	{
		resultado[i] = str[pos_ini + i];
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}

char	*ft_removespc_right(char *str)
{
	int		i;
	char	*resultado;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '+'))
			break ;
		i++;
	}

	if ((resultado = malloc(i)) == NULL)
		return (NULL);
	i--;
	while (i >=  0)
	{
		resultado[i] = str[i];
		i--;
	}

	return (resultado);
}
