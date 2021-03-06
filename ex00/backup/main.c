/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:08:31 by slopez-p          #+#    #+#             */
/*   Updated: 2020/02/23 20:56:43 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "rush.h"
#include <stdbool.h>

bool	arg_verify(int argc, char *argv[], char **file, char **nb)
{
	if (argc == 3 && argv[1] != 0 && argv[2][0] != 0)
	{
		*file = argv[1];
		*nb = clean_number(argv[2]);
		if (!*nb)
			ft_print("Error\n");
	}
	else if (argc == 2 && argv[1][0] != 0)
	{
		*nb = clean_number(argv[1]);
		if (!*nb)
			ft_print("Error\n");
	}
	else
	{
		ft_print("Error\n");
		return (false);
	}
	return (true);
}

int		main(int argc, char *argv[])
{
	char	*nb;
	char	*file = "numbers.dict";
	t_dic	*dictionary;

	nb = 0;
	arg_verify(argc, argv, &file, &nb);
	if (!nb)
		return(0);
	dictionary = load_dictionary(file);
	if (imprime(nb, dictionary))
	{
		ft_static_print(NULL, true);
		ft_print("\n");
	}
	else
		ft_print("Dict Error\n");
	return (0);
}
