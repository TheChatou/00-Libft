/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:09:21 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:29:46 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui imprime la table de multiplication de l'int entre en argument
void	tab_mult(char *num)
{
	int	chif;
	int	nb;

	chif = 1;
	nb = ft_atoi(num);
	if (nb >= 0)
	{
		while (chif <= 9)
		{
			ft_putchar_fd(chif + '0', 1);
			ft_putstr_fd(" x ", 1);
			ft_putnbr_fd(nb, 1);
			ft_putstr_fd(" = ", 1);
			ft_putnbr_fd((chif * nb), 1);
			chif++;
			ft_putchar_fd('\n', 1);
		}
	}
	else
		ft_putchar_fd('\n', 1);
}
