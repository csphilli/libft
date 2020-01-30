/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_size_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:48:28 by cphillip          #+#    #+#             */
/*   Updated: 2020/01/29 14:10:39 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

int		ft_nbr_size_base(int nbr, int base)
{
	int	len;

	len = 0;
	len += (nbr < 0);
	while (nbr /= base)
		len++;
	printf("size of len: %ld\n", sizeof(int * (len)));
	return (len);
}
