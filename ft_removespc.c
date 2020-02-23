/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_removespc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:40:27 by mrubio            #+#    #+#             */
/*   Updated: 2020/02/23 13:11:18 by slopez-p         ###   ########.fr       */
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
	size = i - pos_ini + 1;
	if (!size)
		return (0);
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
	int		size;
	char	*resultado;

	size = ft_strlen(str);
	i = size - 1;
	while ((i >= 0) && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
	str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i--;
	if (i < 0)
		return(0);

	size = i + 2;
	if ((resultado = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		resultado[i] = str[i];
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}
