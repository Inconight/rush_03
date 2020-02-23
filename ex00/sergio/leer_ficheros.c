#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{	
	int	find_out;
	char *buffer;
	ssize_t n_file;

	find_out = open("Diccionario.txt", O_RDONEL);
	if (find_out == -1)
		error
	else
	{
		read(find_out, buffer, 128);
		printf("%s", buffer);
	}
	return (0);
}
