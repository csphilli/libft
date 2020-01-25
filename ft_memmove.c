/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:17:05 by cphillip          #+#    #+#             */
/*   Updated: 2020/01/10 19:25:57 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 0;
	if (dst == src)
		return (dst);
	if (src < dst)
		while (++i <= len)
			((char*)dst)[len - i] = ((char *)src)[len - i];
	else
	{
		while (len-- > 0)
		{
			((char*)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
