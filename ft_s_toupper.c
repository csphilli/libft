/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 09:10:43 by cphillip          #+#    #+#             */
/*   Updated: 2020/02/04 09:11:41 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
