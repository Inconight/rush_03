/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slopez-p <slopez-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:17:27 by scordero          #+#    #+#             */
/*   Updated: 2020/02/23 12:13:07 by slopez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] != '\0' && str[i + n] == to_find[n])
		{
			if (to_find[n + 1] == '\0')
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}
