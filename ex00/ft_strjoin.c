/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 15:09:28 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 23:04:59 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdlib.h>

char	*ft_strjoin(char *str1, char *str2, char separator)
{
	int		i;
	int		k;
	int		extra;
	char	*str_res;

	extra = (separator > 0);
	if ((str_res = malloc(ft_strlen(str1) + ft_strlen(str2)
					+ 1 + extra)) == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str_res[i] = str1[i];
		i++;
	}
	k = 0;
	if (extra)
		str_res[i++] = separator;
	while (str2[k])
	{
		str_res[i + k] = str2[k];
		k++;
	}
	str_res[i + k] = 0;
	return (str_res);
}
