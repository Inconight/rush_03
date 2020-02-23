/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/23 02:40:45 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "rush.h"

int		g_error;

int		main(int argc, char *argv[])
{
	char	*numero;
//	char	*diccionario = "./numbers.dict";
	int		i;

	i = 0;
	g_error = 0;
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
//		carga_diccionario(argv[1], diccionario);
		numero = clean_number(argv[2]);
		if (!numero)
			g_error = 1;
	}
	else if (argc == 2)
		numero = clean_number(argv[1]);
	else
		g_error = 1;
	if (g_error)
	{
		write(1, "error\n", 6);
		return (1);
	}
#ifdef DEBUG
	printf("numero en el main!! %s\n", numero);
#endif
	// imprime(numero, diccionario);
	return (0);
}
