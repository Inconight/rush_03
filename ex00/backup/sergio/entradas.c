#include <stdio.h>

typedef		long int	num;
char	*carga_diccionario(char *entrada, char *diccionario)
{
	printf("Entramos en <carga_diccionario>\n");
	printf("	entrada = %s\n\tdiccionario = \"%s\"\n", entrada, diccionario);

	return(diccionario);

}

char	*comprueba_numero(char *str, int *cifras)
{
	int	i; 
	int p_inicial;
	int digitos;
	char	*numero;

	printf("Entramos en <comprueba_numero>\n");
	printf("\tentrada = <%s>\n", str);
		
	i = 0;
	digitos = 0;
	while (str[i] != 0 && (str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	printf("%d espacios\n", i);
	if (str[i] != 0 && str[i] == '+')
	{
		i++;
		printf("signo = +");
	}
	while (str[i] == '0')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
			break;
	}
	p_inicial = i;
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		i++;
		digitos++;
	}
	printf("%d digitos\n", digitos);
	while (str[i] != 0 && (str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	printf("%d espacios extra\n", i);
	if (str[i] != 0 || digitos == 0)
		*cifras = 0;
	else
		numero = malloc (digitos +1);
		if (numero == 0)
			*cifras = 0;
		*cifras = digitos;
	
	
	printf("\tentrada = <%s> y tiene %d cifras\n", str, *cifras);
	return(str);
}

void	comprueba_diccionario(char *str, int *cifras)
{
	int	i; 
	int signo;
	int digitos;

	printf("Entramos en <comprueba_diccionario>\n");
	printf("\tentrada = <%s>\n", str);
		
	i = 0;
	digitos = 0;
	signo = 0;
	while (str[i] != 0 && (str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	printf("%d espacios\n", i);
	if (str[i] != 0 && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signo = -1;
		else
			signo = 1;
		i++;
	}
	printf("signo = %d\n", signo);
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
	{
		i++;
		digitos++;
	}
	printf("%d digitos\n", digitos);

	while (str[i] != 0 && (str[i] == '\t' || str[i] == '\n' || \
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	printf("%d espacios extra\n", i);
	
	if (str[i] != 0 || digitos == 0)
		str = 0;
	else
		*cifras = digitos;

	printf("\tentrada = %s y tiene %d cifras\n", str, *cifras);
	
}
