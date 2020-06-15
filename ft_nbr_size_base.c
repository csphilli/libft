/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_size_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:48:28 by cphillip          #+#    #+#             */
/*   Updated: 2020/06/15 13:16:54 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

int		ft_nbr_size_base(uintmax_t nbr, int base)
{
	int	len;

	len = 0;
	len += (nbr < 0);
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
