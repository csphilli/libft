/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:46:32 by cphillip          #+#    #+#             */
/*   Updated: 2020/03/02 13:46:59 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void	ft_putnbrmax(intmax_t nbr)
{
	if (nbr > 9)
		ft_putnbrmax(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
