#include <stdio.h>

typedef		struct		s_dic
{
        char	*nb;
        char	*text;
        struct s_dictionary1    *next;
} t_dic;

void	imprime(char *numero, s_dic buscame);
{
	int 	i;
	int 	size;
	int 	miles;
	char	num3[3] = "000"; 

	printf("entramos en <imprime>\n");
	printf("numero recibido = <%s> ", numero);
	size = 0;
	while (numero[size] != 0)
		size++;
	if (numero[0] = 0 && size == 1)
		dic_search(lista, '0');
	else 
	{
		if (size % 3 != 0)
		{
			numero = ft_char3(numero, size);
			size = size + 3 - (size %3);
		}
		
		miles = (size - 1) / 3;
		printf("de %d cifras\n", size);
		printf("esto en algun momento convertira un 42 en cuarenta dos\n");

		i = 0;
		while (miles > 0)
		{
			num3 = ft_readstring(i, 3, numero);

			if (i < size)
			{
				imprime_cifras(num3);
				imprime_miles(miles);
			}
			i = i + 3;
			miles--;
		}
		num3 = ft_readstring(i, 3, numero);
		imprime_cifras(num3);
	}
}
