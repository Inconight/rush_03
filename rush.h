/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:39:36 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 01:15:03 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

struct					s_dic
{
	char			*nb;
	char			*text;
	struct s_dic	*next;
};

typedef struct s_dic	t_dic;
t_dic					*dic_create(char *nb, char *text);
char					*read_line(char *path);
char					*ft_strstr(char *str, char *to_find);
int						is_printer_chars(char *cadena);
char					*ft_removespc_left(char *str);
char					*ft_removespc_right(char *str);
char					*ft_readstring(char *src, int inic, int size);
void					copy_str(char *dest, char *src);
char					*clean_number(char *str);
int						busca_char(char *cadena, char busqueda);
char					*dic_search(t_dic *list, char *str);
void					imprime(char *numero, t_dic buscame);

#endif
