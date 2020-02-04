/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:39:37 by cphillip          #+#    #+#             */
/*   Updated: 2020/02/04 15:38:40 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"
char	*ft_s_toupper(char *str)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!(tmp = (char *)malloc(sizeof(ft_strlen(str) * (char)+1))))
		return (NULL);
	tmp = ft_strdup(str);
	while (*(tmp + i))
	{
		*(tmp + i) = ft_toupper(*(tmp + i));
		i++;
	}
	free(str);
	return (tmp);
}
