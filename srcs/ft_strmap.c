/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:50:38 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 09:30:32 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = ft_strnew(ft_strlen(s));
	if (!s || !new)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}
