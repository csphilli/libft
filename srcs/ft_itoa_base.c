/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:40:26 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/24 22:47:07 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(uintmax_t nbr, int base)
{
	char	*new;
	int		j;

	j = ft_nbr_size_base(nbr, base);
	new = (char *)malloc(sizeof(char) * j + 1);
	if (new == NULL)
		return (NULL);
	if (nbr < 0)
		new[0] = '-';
	new[j] = '\0';
	while (j--)
	{
		if (nbr % base < 10)
			new[j] = nbr % base + '0';
		else
			new[j] = nbr % base + 'a' - 10;
		nbr /= base;
	}
	return (new);
}
