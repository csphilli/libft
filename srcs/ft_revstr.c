/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:46:12 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 09:11:53 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_revstr(char *str)
{
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	tmp = (char *)malloc(sizeof(len * (char) + 1));
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	while (len--)
	{
		tmp[len] = str[i];
		i++;
	}
	return (tmp);
}
