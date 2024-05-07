/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:00 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:11:08 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui renvoi 1 si jamais les caracteres de la chaine donnée
// en premier argument, sont presents dans l'ordre dans la chaine donnée
// en second argument. Sinon la Fonction renvoie 0
int	ft_cmp(char *to_find, char *str)
{
	while (to_find && *str != '\0')
	{
		if (*to_find == *str)
		{
			to_find++;
			str++;
		}
		else
			str++;
	}
	if (*to_find != '\0')
		return (0);
	else
		return (1);
}

void	hidenp(char *to_find, char *str)
{
	if (to_find && str)
	{
		if (ft_cmp(to_find, str))
			ft_putstr_fd("1", 1);
		else
			ft_putstr_fd("0", 1);
		to_find++;
	}
	ft_putstr_fd("\n", 1);
}
