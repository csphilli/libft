/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 17:13:08 by csphilli          #+#    #+#             */
/*   Updated: 2020/03/10 10:51:27 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*
**  In the event a max number is passed, this prints it out. The sign
**  is handled in the respective function. In this case, it's only print_d.c
*/

void	handle_max(t_struct *csp)
{
	do_max();
	csp->s_len += 18;
}

void	do_max(void)
{
	write(1, "9223372036854775808", 19);
}
