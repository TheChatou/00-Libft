/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:28:25 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:21:29 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui imprime la chaine donnée a l'envers
void	rev_print(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
		while (i > 0)
		{
			ft_putchar_fd(str[i - 1], 1);
			i--;
		}
	}
	ft_putchar_fd('\n', 1);
}
