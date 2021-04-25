/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_str_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:26:01 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/24 22:43:33 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_str_num(const char *s1)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[i])
	{
		if (ft_isdigit(s1[i]))
			len++;
		i++;
	}
	if (i == len)
		return (1);
	return (0);
}
