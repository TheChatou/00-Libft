/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:36:02 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:04:19 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Remplace chaque espace de l'argument donne, par 3 espaces
void	expand_str(char *str)
{
	if (str)
	{
		while (str)
		{
			while (*str <= 32)
				str++;
			while (*str > 32)
			{
				ft_putchar_fd(*str, 1);
				str++;
			}
			if (*str == '\0')
				break ;
			if (*str <= 32)
			{
				while (*str <= 32 && *str > 0)
					str++;
				if (*str == 0)
					break ;
				ft_putstr_fd("   ", 1);
			}
		}
	}
	ft_putchar_fd('\n', 1);
}
