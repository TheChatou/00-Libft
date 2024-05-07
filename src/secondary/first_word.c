/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:17:18 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:05:10 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Renvoi le premier mot de la string donnee en argument
void	first_word(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] <= 32 && str[i] != '\0')
			i++;
		while (str[i] > 32)
		{
			ft_putchar_fd(str[i], 1);
			i++;
		}
	}
	ft_putchar_fd('\n', 1);
}
