/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:06:01 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:17:56 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/ft_printf.h"

//	Fonction qui imprime le plus grand diviseur commun de deux nombres
// donnés en parametre
void	pgcd(int x, int y)
{
	int	rslt;

	if (x && y)
	{
		rslt = x;
		if (x > y)
			rslt = y;
		while (rslt)
		{
			if (x % rslt != 0 || y % rslt != 0)
				rslt--;
			else
				break ;
		}
		ft_printf("%d", rslt);
	}
	ft_printf("\n");
}
