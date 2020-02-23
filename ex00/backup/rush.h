/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:39:36 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 20:31:14 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <stdbool.h>

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
bool					imprime(char *numero, t_dic *buscame);
t_dic					*load_dictionary(char *path);
char					*ft_char3(char *str, int size);
bool					imprime_cifras(t_dic *dictionary, char *num3);
char					*imprime_unidad(t_dic *dictionary, char *numero);
char					*imprime_decena(t_dic *dictionary, char *numero);
char					*imprime_centena(t_dic *dictionary, char *numero);
char					*imprime_miles(t_dic *dictionary, int ceros, char *before);
int						ft_strlen(char *str);
char					*ft_strjoin(char *str1, char *str2, char separator);
char					*ft_strcpy(char *dst, char *str);
void					ft_putchar(char c);
void					ft_static_print(char *str, bool do_print);
void					ft_print(char *str);
int						ft_strcmp(char *s1, char *s2);
bool					ft_is_number(char *nb);

#endif
