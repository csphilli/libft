/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:25:51 by cphillip          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/06/15 13:18:48 by cphillip         ###   ########.fr       */
=======
/*   Updated: 2020/03/06 23:55:30 by csphilli         ###   ########.fr       */
>>>>>>> 006a08b2f03ffdd40a43c186d0abfc9cdd07d260
/*                                                                            */
/* ************************************************************************** */

#include "./header/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
<<<<<<< HEAD
	if (!(new = (char*)malloc(sizeof(char)\
		* (ft_strlen(s1) + ft_strlen(s2) + 1))))
=======
	if (!(new = (char*)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1))))
>>>>>>> 006a08b2f03ffdd40a43c186d0abfc9cdd07d260
		return (NULL);
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j++] = '\0';
	return (new);
}
