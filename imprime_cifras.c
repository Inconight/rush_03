#include "rush.h"
#include <stdlib.h>

imprime_cifras(char *num3)
{
	if (num3[0] != '0')
		imprime_centena(num[0]);
	if (num3[1] == '0')
		imprime_decena(num);
	if (num3[1] != '1' && num3[2] != 0)
		imprime_unidad(num[2]);
}

void	imprime_unidad(char *numero)
{
	char 	*p_char;
	int		i;

	p_char = malloc(2);
	if (p_char)
	{
		p_char[0] = numero[2];
		p_char[1] = '\0';
	}
	dic_search(lista, p_char);
}

void	imprime_decena(char *numero)
{
	char 	*p_char;
	int		i;

	p_char = malloc(3);
	if (p_char)
	{
		p_char[0] = numero[1];
		p_char[1] = numero[2];
		p_char[2] = '\0';
	}
	if (numero[1] == 1)
		dic_search(lista, p_char);
	else if (numero[1] != 0)
	{
		p_char[1] = '\0'
		dic_search(lista, p_char);
	}
	free(p_char);
}

void	imprime_centena(char *numero)
{
	char 	*p_char;
	int		i;

	p_char = malloc(2);
	if (p_char)
	{
		p_char[0] = numero[0];
		p_char[1] = '\0';
	}
	dic_search(lista, p_char);
	dic_search(lista, "100");
}

void	imprime_miles(int ceros)
{
	char 	*p_char;
	int 	size;
	int		i;
	
	size = ceros * 3 + 2;
	i = 1;
	p_char = 0;
	p_char = malloc(size);
	if (pchar)
		p_char[0] = '1';
	while (i < size)
	{
		p_char[i] = '0';
		i++;
	}
	p_char[i] = '\0';
	dic_search(lista, p_char)
	free(p_char);	
}

