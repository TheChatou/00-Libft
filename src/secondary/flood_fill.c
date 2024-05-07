/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:01:59 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:06:20 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/ft_printf.h"

void	checkarround(char **tab, t_point s, t_point b, char c)
{
	int	i;

	if (b.y < 0 || b.y >= s.y || b.x < 0 || b.x >= s.x || tab[b.y][b.x] != c)
		return ;
	tab[b.y][b.x] = '-';
	i = 0;
	while (i++ < s.y)
		ft_printf("%s\n", tab[i]);
	ft_printf("\n");
	checkarround(tab, s, (t_point){b.x - 1, b.y}, c);
	checkarround(tab, s, (t_point){b.x + 1, b.y}, c);
	checkarround(tab, s, (t_point){b.x, b.y - 1}, c);
	checkarround(tab, s, (t_point){b.x, b.y + 1}, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	checkarround(tab, size, begin, tab[begin.y][begin.x]);
}
