/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 11:14:25 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 08:58:56 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ll.h"

void	unshift_node(t_list *list, void *data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->data = data;
	if (list->head == NULL)
	{
		list->tail = new;
		new->next = NULL;
	}
	else
		new->next = list->head;
	list->head = new;
}

void	append_node(t_list *list, void *data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->data = data;
	new->next = NULL;
	if (!list->head)
		list->head = new;
	else
		list->tail->next = new;
	list->tail = new;
}
