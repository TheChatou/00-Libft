/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:14:03 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:26:23 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Fonction qui prend en paramettre une t_list, et en second parametre
// une fonction qui compare (strcmp), et tri chaque element de la liste
// en fonction de l'ordre ascii des premiers caracteres de chaque liste
void	swap_values(t_list *a, t_list *b)
{
	void	*swap;

	swap = a->content;
	a->content = b->content;
	b->content = swap;
}

t_list	*sort_list(t_list *lst, int (*cmp)(void*, void*))
{
	int		swapped;
	t_list	*cur;

	swapped = 1;
	cur = lst;
	while (swapped == 1)
	{
		swapped = 0;
		while (cur != 0 && cur->next != 0)
		{
			if (cmp(cur->content, cur->next->content) == 0)
			{
				swap_values(cur, cur->next);
				swapped = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}
