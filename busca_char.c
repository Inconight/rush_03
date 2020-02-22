/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   busca_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scordero <scordero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:42 by scordero          #+#    #+#             */
/*   Updated: 2020/02/22 17:35:13 by scordero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		busca_char(char *cadena, char busqueda)
{
	int i;

	i = 0;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == busqueda)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
