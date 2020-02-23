/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/22 13:24:05 by slopez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "cabeceras.h"

int		g_error;

int		main(int argc, char ** argv)
{
	int		cifras;
	char	*numero;
	char	*diccionario = "./numbers.dict";
	int		i;

	i = 0;
	g_error = 0;
	printf("%d argumentos:\n", argc);
	while (i < argc)
	{
		printf ("%d: %s\n", i, argv[i]);
		i++;
	}
	if (argc == 3)
	{
		carga_diccionario(argv[1], diccionario);
		numero = comprueba_numero(argv[2], &cifras);
		if (!cifras)
			g_error = 1;
	}
	else if (argc == 2)
		numero = comprueba_numero(argv[1], &cifras);
	else
		g_error = 1;
	if (g_error)
	{
		write(1, "error\n", 6);
		return (1);
	}
	imprime(numero, cifras, diccionario);
	return (0);
}
