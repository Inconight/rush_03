/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 18:37:53 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush.h"

t_dic	*load_dictionary(char *path)
{
	int		fd;
	char	*line;
	t_dic	*dictionary;
	t_dic	*current;
	int 	position;
	char 	*num;
	char	*text;

	dictionary = NULL;
	current = NULL;
	line = NULL;
	if ((fd = open(path, O_RDONLY)) == -1)
	{
		printf("ERROR\n");
		return (NULL);
	}
	else
	{
		while ((line = read_line(fd)) !=  NULL)
		{
			position = busca_char(line, ':');
			num = ft_readstring(line, 0, position);
			text = ft_readstring(line, position + 1, 0);
			num = ft_removespc_right(num);
			text = ft_removespc_left(text);
			// TODO comprobar si son letras, si son numeros antes de continuar
			current = dic_create(current, num, text);
			if (dictionary == NULL)
				dictionary = current;
		}

	}
	close(fd);
	return (dictionary);
}

char	*read_line(int fd)
{
	int		i;
	char	*copy;
	char	*buffer;

	copy = NULL;
	buffer = NULL;
	if ((buffer = malloc(1024))	== NULL)
		return (NULL);
	i = -1;
	while (read(fd, &buffer[++i], 1))
		if (buffer[i] == '\n')
			break ;
	buffer[i] = '\0';
	copy = malloc(i + 1);
	if (copy == NULL)
		return (NULL);
	ft_strcpy(copy, buffer);
	free(buffer);
	if (i)
		return (copy);
	else
		return NULL;
}
