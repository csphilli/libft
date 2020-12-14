/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:49:54 by cphillip          #+#    #+#             */
/*   Updated: 2020/12/14 19:47:51 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_lstappend(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (tmp && new)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else if (new)
		*alst = new;
}
