/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/23 18:30:23 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "rush.h"

int	main(int argc, char *argv[])
{
	char	*numero;
	char	*file = "numbers.dict";
	t_dic	*dictionary;

	numero = 0;
	if (argc == 3 && argv[1] != 0 && argv[2][0] != 0)
	{
		file = argv[1];
		numero = clean_number(argv[2]);
		if (!numero)
			ft_print("Error\n");
	}
	else if (argc == 2 && argv[1][0] != 0)
	{
		numero = clean_number(argv[1]);
		if (!numero)
			ft_print("Error\n");
	}
	else
	{
		ft_print("Error\n");
		return (0);
	}
	if (!numero)
		return(0);
	dictionary = load_dictionary(file);
	if (imprime(numero, dictionary))
		ft_static_print(NULL, true);
	else
		ft_print("Dict Error\n");
	return (0);
}
