/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:21:00 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:22:14 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui remplace dans une chaine donnée, le premiere caractere donné
// par le second, et imprime la chaine modifiee 
void	search_and_replace(char *str, char from, char to)
{
	if (str && from && to)
	{
		while (*str != '\0')
		{
			if (*str == from)
			{
				*str = to;
				ft_putchar_fd(*str, 1);
			}
			else
				ft_putchar_fd(*str, 1);
			str++;
		}
	}
	ft_putchar_fd('\n', 1);
}
