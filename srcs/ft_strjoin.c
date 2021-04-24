/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:25:51 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/24 22:34:05 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len_i;
	int		len_j;

	if (!s1 || !s2)
		return (NULL);
	len_i = ft_strlen(s1);
	len_j = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) \
		 * (len_i + len_j + 1));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, len_i);
	ft_memcpy(&new[len_i], s2, len_j);
	new[len_i + len_j] = '\0';
	return (new);
}
