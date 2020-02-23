/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:14:21 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:40:32 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dst, char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
