/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:17:02 by cphillip          #+#    #+#             */
/*   Updated: 2020/11/25 09:30:58 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strndup(char *str, int size)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = ft_strnew(size)))
		return (NULL);
	while (str && i < size)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
