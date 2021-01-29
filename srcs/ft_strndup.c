/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:17:02 by cphillip          #+#    #+#             */
/*   Updated: 2021/01/29 18:14:02 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *str, int size)
{
	char	*new;

	new = ft_strnew(sizeof(char*) * size);
	new[size + 1] = '\0';
	return ((char*)ft_memcpy(new, str, size));
}
