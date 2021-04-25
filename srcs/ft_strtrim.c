/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:51:59 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 09:47:52 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*new;

	if (!s)
		return (0);
	start = 0;
	end = ft_strlen(s);
	while (ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	new = ft_strnew(end - start);
	if (!new)
		return (NULL);
	return (ft_strncpy(new, s + start, end - start));
}
