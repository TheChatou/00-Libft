/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:51:58 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:08:23 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	fonction qui converti un nombre en base 16 en in base 10
int	define_base(char c, int base)
{
	char	*str;
	char	*str2;

	str = "0123456789abcdef";
	str2 = "0123456789ABCDEF";
	while (base--)
		if (str[base] == c || str2[base] == c)
			return (1);
	return (0);
}

int	value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		rslt;
	int		sign;

	i = 0;
	rslt = 0;
	sign = 1;
	while (*str <= 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (define_base(*str, str_base))
	{
		rslt *= str_base;
		rslt += value_of(*str);
		str++;
	}
	return (rslt * sign);
}
