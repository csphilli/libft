/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:00:50 by cphillip          #+#    #+#             */
/*   Updated: 2020/11/25 09:24:45 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
**	The main function here is ft_arrcat. It is a dynamic sizing array of
**	pointers. 'make_new_arr' is simply here due to the restrictions of
**	function length. If a NULL array is passed to ft_arrcat, a new one
**	will be set up, populated with only 1 string, and a pointer to it
**	returned. If an array already exists, a new array will be created
**	with enough capacity to increase the source by one. Contents will be
**	copied over and a pointer to it returned. When I originally created
**	this, the source was deleted and if I hadn't used ft_strdup, memleaks
**	would've happened.
*/

char	**make_new_arr(char *str)
{
	char	**new;

	if (!(new = (char**)malloc(sizeof(char*) * 2)))
		exit(-1);
	ft_init_arr(new, 2);
	new[0] = ft_strdup(str);
	return (new);
}

char	**ft_arrcat(char **arr, char *str)
{
	char	**new;
	int		i;
	int		len;

	i = 0;
	if (!arr)
		new = make_new_arr(str);
	else
	{
		len = ft_arrlen(arr);
		len += 2;
		if (!(new = (char**)malloc(sizeof(char*) * (len))))
			exit(-1);
		ft_init_arr(new, len);
		while (i < len - 2)
		{
			new[i] = ft_strdup(arr[i]);
			i++;
		}
		new[i] = ft_strdup(str);
	}
	return (new);
}
