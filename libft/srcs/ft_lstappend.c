/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:49:54 by cphillip          #+#    #+#             */
/*   Updated: 2020/12/13 20:54:55 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstappend(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (tmp && new)
	{
		while (tmp)
			tmp = tmp->next;
		tmp->next = new;
	}
	else if (new)
		*alst = new;
}
