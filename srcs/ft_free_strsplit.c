/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:55:45 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/24 22:38:59 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_strsplit(char ***array)
{
	char	**current;

	if (array && *array)
	{
		current = ((*array));
		while ((*current))
			free((*(current++)));
		free((*array));
		(*array) = NULL;
	}
}
