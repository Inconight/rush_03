#include <stdio.h>
typedef		long int	num;

void	imprime(char *numero, int cifras, char *dic)
{
	printf("entramos en <imprime>\n");
	printf("	numero = %s de %d cifras\n\tdiccionario = %s\n", numero, cifras, dic);
	printf("esto en algun momento convertira un 42 en cuarenta dos\n");
}

