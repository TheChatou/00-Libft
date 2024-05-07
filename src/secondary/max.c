/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:48:51 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:17:02 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui renvoi le plus grand nombre dans un ensemble d'int donné
int	max(int *tab, unsigned int len)
{
	int				saved;
	unsigned int	i;

	i = 0;
	saved = *tab;
	if (!tab)
		return (0);
	while (i++ && i < len)
	{
		if (*tab > saved)
			saved = *tab;
	}
	return (saved);
}
