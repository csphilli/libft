/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:00:50 by cphillip          #+#    #+#             */
/*   Updated: 2020/10/08 21:10:26 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

char	**ft_arrcat(char **arr, char *str)
{
	char	**new;
	int		i;
	int		len;

	i = 0;
	len = ft_arrlen(arr);
	len += 2;
	new = (char**)malloc(sizeof(char*) * (len));
	ft_init_arr(new, len);
	while (i < len - 2)
	{
		new[i] = ft_strdup(arr[i]);
		i++;
	}
	new[i] = ft_strdup(str);
	return (new);
}
