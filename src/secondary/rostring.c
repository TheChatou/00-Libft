/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:37:05 by fcoullou          #+#    #+#             */
/*   Updated: 2024/05/03 12:21:30 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

//	Focntion qui imprime chaque mot de la chaine passee en argument a l'envers
// "mot" signifie ici n'importe quel espace ou tab
int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	return (i);
}

int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		++i;
	return (i);
}

int	print_word(char *str, int i, int *is_first)
{
	int	word_len;

	i = skip_whitespace(str, i);
	word_len = ft_wordlen(str + i);
	if (*is_first == 0)
		ft_putchar_fd(' ', 1);
	ft_putstr_fd(str + i, 1);
	*is_first = 0;
	return (i + word_len);
}

int	epur_str(char *str)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 1;
	i = skip_whitespace(str, i);
	while (str[i] != '\0')
	{
		i = print_word(str, i, &is_first);
		i = skip_whitespace(str, i);
	}
	return (is_first);
}

int	rostring(char *str)
{
	int		i;
	int		is_first;

	if (str)
	{
		i = 0;
		i = skip_whitespace(str, i);
		i = i + ft_wordlen(str + i);
		is_first = epur_str(str + i);
		print_word(str, 0, &is_first);
	}
	ft_putchar_fd('\n', 1);
	return (0);
}
