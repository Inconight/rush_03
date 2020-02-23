#include <stdio.h>

char	*ft_char3(char *str, int size);

int		main(void)
{
	char	*nuevo;
	char str[12] = {"12345678901\n"};
	int tama;

	tama = 10;

	nuevo = ft_char3(str, tama);
	puts(nuevo);
}