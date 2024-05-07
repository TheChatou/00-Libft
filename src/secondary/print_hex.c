/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:44:31 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:21:13 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui prend un int positif en base 10 en argument,
// et le converti en base 16
int	chartoint(char *num)
{
	unsigned int	rslt;

	rslt = 0;
	while (*num != '\0')
	{
		rslt *= 10;
		rslt += *num - '0';
		++num;
	}
	return (rslt);
}

void	inttohex(int rslt)
{
	char	*base;

	base = "0123456789abcdef";
	if (rslt >= 16)
		inttohex(rslt / 16);
	ft_putchar_fd(base[rslt % 16], 1);
}

void	print_hex(char *str)
{
	if (str)
		inttohex(chartoint(str));
	ft_putchar_fd('\n', 1);
}
