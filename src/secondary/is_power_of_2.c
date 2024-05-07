/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:04:38 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:11:51 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui renvoi 1 si le nombre donne est un multiple de 2
int	is_power_of_2(unsigned int n)
{
	unsigned int	r;

	r = n / 2;
	if (n == 1)
		return (1);
	while (r > 1)
	{
		if ((n / r == r) && (n % r == 0))
			return (1);
		else
			r--;
	}
	return (0);
}
