/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:30:26 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/24 22:42:54 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen_max(uintmax_t nbr)
{
	int	len;

	if (nbr < 0)
		nbr *= -1;
	len = 1;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
