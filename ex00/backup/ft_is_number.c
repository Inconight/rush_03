/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 20:27:10 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:31:08 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_number(char *nb)
{
	int i;

	i = 0;
	while (nb[i])
	{
		if (nb[i] < '0' || nb[i] > '9')
			return (false);
		i++;
	}
	return (true);
}
