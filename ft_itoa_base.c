/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:40:26 by cphillip          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/06/15 13:17:46 by cphillip         ###   ########.fr       */
=======
/*   Updated: 2020/03/07 09:36:12 by csphilli         ###   ########.fr       */
>>>>>>> 006a08b2f03ffdd40a43c186d0abfc9cdd07d260
/*                                                                            */
/* ************************************************************************** */

#include "./header/libft.h"

char	*ft_itoa_base(uintmax_t nbr, int base)
{
	char	*new;
	int		j;
<<<<<<< HEAD

=======
>>>>>>> 006a08b2f03ffdd40a43c186d0abfc9cdd07d260
	j = ft_nbr_size_base(nbr, base);
	if (!(new = (char*)malloc(sizeof(char) * j + 1)))
		return (NULL);
	if (nbr < 0)
		new[0] = '-';
	new[j] = '\0';
	while (j--)
	{
		new[j] = (nbr % base < 10) ? nbr % base + '0' : nbr % base + 'a' - 10;
		nbr /= base;
	}
	return (new);
}
