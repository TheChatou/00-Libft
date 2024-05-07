/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:36:42 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/03 11:03:55 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Focntion qui calcule le nombre de bytes de la chaine de caracteres donnée,
// jusqu'a sa fin, ou un caractère present dans le second argument donné
int	comp(char c, const char *reject)
{
	int	i;

	i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (0);
		i++;
	}
	return (1);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (!comp(s[i], reject))
			break ;
		i++;
	}
	return (i);
}
