/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 20:46:51 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush.h"
#include <stdbool.h>
#include <stdio.h>

t_dic	*adding_entry(int fd)
{
	t_dic	*dictionary;
	t_dic	*current;
	int		position;
	char	*text;
	char	*num;
	char	*line;

	dictionary = NULL;
	current = NULL;
	while ((line = read_line(fd)) !=  NULL)
	{
		position = busca_char(line, ':');
		num = ft_removespc_right(ft_readstring(line, 0, position));
		text = ft_removespc_left(ft_readstring(line, position + 1, 0));
		if (!ft_is_number(num) || !is_printer_chars(text))
		{
			ft_print("Error\n");
			return (NULL);
		}
		current = dic_create(current, num, text);
		if (dictionary == NULL)
			dictionary = current;
	}

	return (dictionary);
}

t_dic	*load_dictionary(char *path)
{
	int		fd;
	t_dic	*dictionary;

	dictionary = NULL;
	if ((fd = open(path, O_RDONLY)) == -1)
	{
		ft_print("Dict Error\n");
		return (NULL);
	}
	else
	{
		if ((dictionary = adding_entry(fd)) == NULL)
		{
			ft_print("Dict Error\n");
			return (NULL);
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
