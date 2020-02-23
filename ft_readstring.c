/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:09 by rpunet            #+#    #+#             */
/*   Updated: 2020/02/23 06:48:35 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"
#include <stdio.h>

/* Extrae una cadena dada una posicion inicial y un tamaño */
char	*ft_readstring(char *src, int start, int size)
{
	int		i;
	char	*dest;

	if (start < 0)
		return (NULL);
	dest = NULL;
	if (size == 0)
		size = ft_strlen(src) - start;
	if ((dest = malloc(size + 1)) == NULL)
		return (NULL);
	i = 0;
	
	while (src[i + start]  && i < size + start)
	{
		dest[i] = src[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
