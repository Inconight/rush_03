/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_search.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:29:21 by vpetrova          #+#    #+#             */
/*   Updated: 2020/02/23 23:05:59 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "rush.h"

char	*dic_search(t_dic *current, char *numero)
{
	int	i;
	int	same;

	while (current != NULL)
	{
		same = 1;
		i = 0;
		while (current->nb[i] != '\0')
		{
			if (current->nb[i] != numero[i])
			{
				same = 0;
				break ;
			}
			i++;
		}
		if (same == 1 && ft_strlen(numero) == ft_strlen(current->nb))
		{
			return (current->text);
		}
		current = current->next;
	}
	return (NULL);
}
