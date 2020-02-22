/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:39:36 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/22 20:52:50 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include "busca_char.h"
# include "is_printer_chars.h"
# include "ft_removespc.h"
# include "strstr.h"
# include "clean_number.h"
# include "copy_str.h"
# include "read_line.h"
# include "ft_readstring.h"

struct					s_dic
{
	char					nb;
	char					text;
	struct s_dictionary1	*next;
};

typedef struct s_dic	t_dic;
#endif
