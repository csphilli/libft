/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 15:17:11 by cphillip          #+#    #+#             */
/*   Updated: 2021/01/15 19:51:19 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_handle_error(char *error_msg)
{
	write(2, error_msg, ft_strlen(error_msg));
	exit(-1);
}
