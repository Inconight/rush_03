/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:33:46 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 00:50:53 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

t_dic	*dic_create(char *nb, char *text)
{
	t_dic *new_dic;

	new_dic = malloc(sizeof(t_dic));
	new_dic->nb = nb;
	new_dic->text = text;
	new_dic->next = NULL;
	return (new_dic);
}
