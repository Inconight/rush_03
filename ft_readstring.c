/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readstring.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:20:09 by rpunet            #+#    #+#             */
/*   Updated: 2020/02/23 00:42:02 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

char	*ft_readstring(char *src, int inic, int size)
{
	int		i;
	int		k;
	char	*dest;

	if (inic < 0 || size < 1)
		return (NULL);
	dest = NULL;
	if ((dest = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (src[i] != '\0')
	{
		if (i >= inic && i < (inic + size))
		{
			dest[k] = src[i];
			k++;
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
