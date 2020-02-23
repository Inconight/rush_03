#include <stdio.h>

char	*ft_removespc_left(char *str);
char	*ft_removespc_right(char *str);

int		main(void)
{
	char str[20] = {"     12345     "};

	printf("%s\n", ft_removespc_left(str));
	printf("%s\n", ft_removespc_right(str));
	return (0);
}
