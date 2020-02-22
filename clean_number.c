char	*clean_number(char *str)
{
	int	i; 
	int p_inicial;
	int digitos;
	char	*numero;

	printf("Entramos en <comprueba_numero>\n");
	printf("\tentrada = <%s>\n", str);
		
	i = 0;
	digitos = 0;
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
	if (str[i] != 0 || digitos == 0)
		return (0);
	else
	{
		numero = malloc (digitos +1);
		if (numero == 0)
			return (0);
		else
		{
			i = 0;
			while (str[p_inicial + i] != 0)
			{
				numero[i] = str[p_inicial + i];
				i++;
			}
			numero[i] = 0;
			printf("%s\n", numero);
		}
	}
	
	printf("\tentrada = <%s> y tiene %d cifras\n", numero, digitos);
	return(numero);
}