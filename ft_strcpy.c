/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavarre <rnavarre@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:14:21 by rnavarre          #+#    #+#             */
/*   Updated: 2020/02/23 17:18:21 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *str)
{
	int i;

	i = 0;
	while (str[i])
		dst[i] = str[i];
		i++;
	dst[i] = 0;
	return dst;
}