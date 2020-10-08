/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:07:11 by cphillip          #+#    #+#             */
/*   Updated: 2020/10/08 21:09:54 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void	ft_init_arr(char **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
		arr[i++] = NULL;
}
