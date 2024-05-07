/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:51:05 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/07 14:02:58 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
#include "../../include/ft_printf.h"

//	Fonction qui calcule via 3 arguments, 1 int, un operateur, et 1 autre int
int	checknop(int n1, char op, int n2)
{
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n1 - n2);
	if (op == '/')
		return (n1 / n2);
	if (op == '*')
		return (n1 * n2);
	if (op == '%')
		return (n1 % n2);
	else
		return (0);
}

void	do_op(int num1, char op, int num2)
{
	if ((op == '+' || op == '-' || op == '*' || op == '/' || op == '%') && op)
		ft_printf("%d", checknop(num1, op, num2));
	ft_printf("\n");
}
