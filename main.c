/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/23 03:01:17 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "rush.h"

//int		g_error;

int		main(int argc, char *argv[])
{
	char	*numero;
	char	*file = "numbers.dict";
	int		i;
	t_dic	*dictionary;

	i = 0;
//	g_error = 0;
#ifdef DEBUG
	printf("%d argumentos:\n", argc);
	while (i < argc)
	{
		printf ("%d: %s\n", i, argv[i]);
		i++;
	}
#endif
	if (argc == 3)
	{
		file = argv[1];
		numero = clean_number(argv[2]);
		if (!numero)
		{
			printf("Error\n");
			return (0);
		}
	}
	else if (argc == 2)
		numero = clean_number(argv[1]);
	else
	{
		printf("Error\n");
		return (0);
	}
	dictionary = load_dictionary(file);
#ifdef DEBUG
	printf("numero en el main!! %s\n", numero);
#endif
	imprime(numero, dictionary);
	return (0);
}
