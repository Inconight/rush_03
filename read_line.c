/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 02:15:15 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush.h"

int		load_dictionary(char *path)
{
	int		fd;
	char	*line;

	line = NULL;
	if ((fd = open(path, O_RDONLY)) == -1)
	{
		printf("ERROR\n");
		return (-1);
	}
	else
	{
		while (line != NULL)
		{
			line = read_line(fd);

		}
	}
	return (0);
}

char	*read_line(int fd)
{
	int		i;
	char	*copy;
	char	*buffer;

	copy = NULL;
	buffer = NULL;
	buffer = (char *)malloc(1024);
	if (buffer == NULL)
		return (NULL);
	i = -1;
	while (read(fd, &buffer[++i], 1))
		if (buffer[i] == '\n')
			break ;
	buffer[i] = '\0';
	copy = malloc(i);
	if (copy == NULL)
		return (NULL);
	copy_str(copy, buffer);
	free(buffer);
	if (i)
		return (copy);
	else
		return NULL;
}
