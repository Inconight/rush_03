/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:56:48 by marvin            #+#    #+#             */
/*   Updated: 2020/02/22 20:48:08 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	copy_str(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
}

char	*read_line(char *path)
{
	int		descriptor;
	int		i;
	char	*copy;
	char	*buff;

	copy = NULL;
	if ((descriptor = open(path, O_RDONLY)) == -1)
		printf("ERROR\n");
	else
	{
		copy = (char *) malloc(1024);
		if (copy == NULL)
			return (NULL);
		i = 0;
		while (1)
		{
			read(descriptor, &copy[i], 1);
			if (copy[i] == '\n')
				break ;
			i++;
		}
		copy[i] = '\0';
		close(descriptor);
		buff = malloc(i);
		copy_str(buff, copy);
		free(copy);
	}
	return (buff);
}
