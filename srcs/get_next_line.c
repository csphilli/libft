/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csphilli <csphilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:49:01 by cphillip          #+#    #+#             */
/*   Updated: 2021/04/25 09:48:57 by csphilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	clean_line(char **fdt, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*fdt)[len] != '\n' && (*fdt)[len] != '\0')
		len++;
	if ((*fdt)[len] == '\n')
	{
		*line = ft_strsub(*fdt, 0, len);
		tmp = ft_strdup(&(*fdt)[len + 1]);
		free(*fdt);
		*fdt = tmp;
		if ((*fdt)[0] == '\0')
			ft_strdel(fdt);
	}
	else
	{
		*line = ft_strdup(*fdt);
		ft_strdel(fdt);
	}
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*fdt[FD_MAX];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			bytes;

	if (fd < 0 || !line)
		return (-1);
	bytes = read(fd, buf, BUFF_SIZE);
	if (bytes > 0)
	{
		buf[bytes] = '\0';
		if (fdt[fd] == NULL)
			fdt[fd] = ft_memalloc(1);
		tmp = ft_strjoin(fdt[fd], buf);
		free(fdt[fd]);
		fdt[fd] = tmp;
	}
	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && (fdt[fd] == NULL || fdt[fd][0] == '\0'))
		return (0);
	return (clean_line(&fdt[fd], line));
}
