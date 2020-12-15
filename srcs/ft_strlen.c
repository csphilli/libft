/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 09:54:10 by cphillip          #+#    #+#             */
/*   Updated: 2020/11/25 09:30:49 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!*str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
