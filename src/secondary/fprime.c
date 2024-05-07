/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:46:59 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:06:39 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui prend en parametre un int positif,
// et renvoi tous ces diviseurs/nombres premiers
void	fprime(unsigned int num)
{
	unsigned int	ui;

	if (num > '0' && num <= '9')
	{
		ui = 2;
		while (ui <= num / 2 && num > 1)
		{
			if ((num % ui == 0))
			{
				ft_putnbr_fd(ui, 1);
				ft_putchar_fd('*', 1);
				num /= ui;
			}
			else
				ui++;
		}
		ft_putnbr_fd(num, 1);
	}
	ft_putchar_fd('\n', 1);
}
