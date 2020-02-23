/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 06:58:17 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "rush.h"

void	print_struct(t_dic *dictionary)
{
	while (dictionary != NULL)
	{
		printf("num = '%s'\nitext = '%s'\n", dictionary->nb, dictionary->text);
		dictionary = dictionary->next;
	}
}

t_dic	*load_dictionary(char *path)
{
	int		fd;
	char	*line;
	t_dic	*dictionary;
	int 	position;
	char 	*num;
	char	*text;

	dictionary = NULL;
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
			dictionary = dic_create(dictionary, num, text);
		}

		print_struct(dictionary);
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
	copy_str(copy, buffer);
	free(buffer);
	if (i)
		return (copy);
	else
		return NULL;
}
