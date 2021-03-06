/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:54:45 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 17:58:31 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strcmp(char *s1, char *s2)
{
	int	equal;
	int	i;

	equal = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			equal = 0;
		else
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (equal);
}
