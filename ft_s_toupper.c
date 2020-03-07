/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 13:39:37 by cphillip          #+#    #+#             */
/*   Updated: 2020/03/07 08:53:24 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void	ft_s_toupper(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
			ft_putchar(str[i]);
		else if (ft_isalpha(str[i]))
			ft_putchar(ft_toupper(str[i]));
		i++;
	}
}
