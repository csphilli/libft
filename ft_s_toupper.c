/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:39:37 by cphillip          #+#    #+#             */
/*   Updated: 2020/03/06 10:01:10 by cphillip         ###   ########.fr       */
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
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			tmp[i] = str[i];
		else if (ft_isalpha(str[i]))
			tmp[i] = ft_toupper(str[i]);		
		i++;
	}
	i++;
	tmp[i] = '\0';
	return (tmp);
}
