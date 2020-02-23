/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 01:17:53 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush.h"

char	*read_line(char *path)
{
	int		descriptor;
	int		i;
	char	*copy;
	char	*buff;

	copy = NULL;
	buff = NULL;
	if ((descriptor = open(path, O_RDONLY)) == -1)
		printf("ERROR\n");
	else
	{
		copy = (char *)malloc(1024);
		if (copy == NULL)
			return (NULL);
		i = -1;
		while (read(descriptor, &copy[++i], 1))
			if (copy[i] == '\n')
				break ;
		copy[i] = '\0';
		close(descriptor);
		buff = malloc(i);
		copy_str(buff, copy);
		free(copy);
	}
	return (buff);
}
