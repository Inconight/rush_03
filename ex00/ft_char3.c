/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 23:58:14 by mrubio            #+#    #+#             */
/*   Updated: 2020/02/23 01:13:42 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_char3(char *str, int size)
{
	int		i;
	char	*new;
	int		ceros;

	new = 0;
	ceros = 3 - size % 3;
	i = 0;
	new = malloc(size + ceros + 1);
	if (new == 0)
		return (0);
	while (i < ceros)
	{
		new[i] = '0';
		i++;
	}
	while (i < (size + ceros + 1))
	{
		new[i] = str[i - ceros];
		i++;
	}
	return (new);
}
