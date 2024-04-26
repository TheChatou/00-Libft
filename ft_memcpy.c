/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:47:01 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/15 14:22:26 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	char			*e;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	e = (char *)src;
	while (i < n)
	{
		d[i] = e[i];
		i++;
	}
	return (d);
}
