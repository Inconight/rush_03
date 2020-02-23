/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/22 20:06:37 by slopez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "cabeceras.h"

char	*clean_number(char *str);
void	carga_diccionario(char *str, char *diccionario);

int		g_error;

int		main(int argc, char ** argv)
{
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
	printf("numero en el main!! %s\n", numero);
	// imprime(numero, diccionario);
	return (0);
}
