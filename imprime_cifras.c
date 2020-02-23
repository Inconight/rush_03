#include "rush.h"
#include <stdlib.h>
#include <stdio.h>

void	imprime_cifras(t_dic *dictionary, char *num3)
{
	if (num3[0] != '0')
		imprime_centena(dictionary, num3);
	if (num3[1] != '0')
		imprime_decena(dictionary, num3);
	/* No se imprime cuando la unidad sea 0 y o la decena sea 1 */
	if (num3[1] != '1' && num3[2] != '0')
		imprime_unidad(dictionary, num3);
}

void	imprime_unidad(t_dic *dictionary, char *numero)
{
	char 	*p_char;

	p_char = malloc(2);
	if (p_char != NULL)
	{
		p_char[0] = numero[2];
		p_char[1] = '\0';
	}
	dic_search(dictionary, p_char);
	free(p_char);
}

void	imprime_decena(t_dic *dictionary, char *numero)
{
	char 	*p_char;

	p_char = malloc(3);
	if (p_char != NULL)
	{
		p_char[0] = numero[1];
		p_char[1] = numero[2];
		p_char[2] = '\0';
	}
	if (numero[1] == '1')
		dic_search(dictionary, p_char);
	else if (numero[1] != '0')
	{
		p_char[1] = '0';
		dic_search(dictionary, p_char);
	}
	free(p_char);
}

void	imprime_centena(t_dic *dictionary, char *numero)
{
	char 	*p_char;

	p_char = malloc(2);
	if (p_char)
	{
		p_char[0] = numero[0];
		p_char[1] = '\0';
	}
	dic_search(dictionary, p_char);
	dic_search(dictionary, "100");
	free(p_char);
}

void	imprime_miles(t_dic *dictionary, int ceros, char *before)
{
	char 	*p_char;
	int 	size;
	int		i;
	
	if (before[0] != '0' || before[1] != '0' || before[2] != '0')
	{
		size = ceros * 3 + 2;
		i = 1;
		p_char = malloc(size);
		if (p_char != NULL)
			p_char[0] = '1';
		while (i < size)
		{
			p_char[i] = '0';
			i++;
		}
		p_char[i] = '\0';
		dic_search(dictionary, p_char);
		free(p_char);
	}
}

