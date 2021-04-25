/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:12:48 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 08:57:12 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*new;
	int				len;
	int				sign;

	sign = n < 0;
	len = ft_nbr_size(n);
	if (n < 0)
		len++;
	new = ft_memalloc(len + 1);
	if (sign)
		n *= -1;
	new[len--] = '\0';
	while (n >= 10)
	{
		new[len--] = (char)(n % 10 + 48);
		n /= 10;
	}
	new[len--] = (char)(n % 10 + 48);
	if (sign)
		new[len] = '-';
	return (new);
}
