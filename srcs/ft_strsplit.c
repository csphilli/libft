/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 09:37:37 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 09:45:52 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	char	**new;

	i = 0;
	j = 0;
	new = ft_memalloc(sizeof(char *) * (ft_nbw(s, c) + 1));
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			new[j] = ft_memalloc(sizeof(char) * (ft_lword(s, c) + 1));
			while (*s && *s != c)
				new[j][i++] = (char)*s++;
			new[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	new[j] = NULL;
	return (new);
}
