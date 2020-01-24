/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:12:48 by cphillip          #+#    #+#             */
/*   Updated: 2019/11/02 11:53:33 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*new;
	unsigned int	nbr;
	int				len;
	int				sign;

	sign = n < 0;
	len = ft_nbr_size(n);
	if (!(new = ft_strnew(len + 1)))
		return (NULL);
	nbr = n < 0 ? -n : n;
	new[len] = '\0';
	while (nbr >= 10)
	{
		new[len--] = (char)(nbr % 10 + 48);
		nbr /= 10;
	}
	new[len--] = (char)(nbr % 10 + 48);
	if (sign == 1)
		new[len] = '-';
	return (new);
}
