/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_static_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 15:48:36 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:07:34 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_static_print(char *str, bool do_print)
{
	static char *buffer;
	static bool not_first_exec;
	char *old_str;

	if (!not_first_exec)
	{
		not_first_exec = true;
		buffer = malloc(ft_strlen(str) + 1);
		ft_strcpy(buffer, str);
	}
	else
	{
		if (do_print)
		{
			ft_print(buffer);
			free(buffer);
			not_first_exec = false;
		}
		else if(str != NULL)
		{
			old_str = buffer;
			buffer = ft_strjoin(buffer, str, ' ');
			free(old_str);
		}
	}
}
