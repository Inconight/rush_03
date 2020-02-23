/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:39:36 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 14:11:47 by slopez-p         ###   ########.fr       */
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
char					*read_line(int fd);
char					*ft_strstr(char *str, char *to_find);
int						is_printer_chars(char *cadena);
char					*ft_removespc_left(char *str);
char					*ft_removespc_right(char *str);
char					*ft_readstring(char *src, int inic, int size);
void					copy_str(char *dest, char *src);
char					*clean_number(char *str);
int						busca_char(char *cadena, char busqueda);
t_dic					*dic_create(t_dic *dictionary, char *nb, char *text);
char					*dic_search(t_dic *list, char *str);
void					imprime(char *numero, t_dic *buscame);
t_dic					*load_dictionary(char *path);
char					*ft_char3(char *str, int size);
void					imprime_cifras(t_dic *dictionary, char *num3);
void					imprime_unidad(t_dic *dictionary, char *numero);
void					imprime_decena(t_dic *dictionary, char *numero);
void					imprime_centena(t_dic *dictionary, char *numero);
void					imprime_miles(t_dic *dictionary, int ceros, char *before);
int						ft_strlen(char *str);

#endif
