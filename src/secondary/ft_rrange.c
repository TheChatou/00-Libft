/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:58:33 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/03 10:59:35 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui renvoi un tableau d'int alloué et trie,
// avec les deux ints entrés en parametre au debut et a la fin,
// comme valeurs respectives de la fin, et du debut
int	*ft_rrange(int start, int end)
{
	int	*rslt;
	int	i;

	i = end - start + 1;
	if (i < 0)
		i = -i;
	rslt = malloc(sizeof(int) * i + 1);
	if (!rslt)
		return (NULL);
	rslt[i--] = '\0';
	while (i >= 0)
	{
		rslt[i] = start;
		start++;
		i--;
	}
	return (rslt);
}
