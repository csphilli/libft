/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:01:02 by cphillip          #+#    #+#             */
/*   Updated: 2020/11/25 09:30:52 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	if (!(s) || (!(new = ft_strnew(ft_strlen(s)))))
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}
