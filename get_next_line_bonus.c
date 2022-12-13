/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:10:10 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/09 15:10:13 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line_bonus.h"

char	*ft_read_fd(int fd, char *s)
{
	char	*p;
	int		size;

	p = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!p)
		return (NULL);
	size = 1;
	while (!ft_strchr(s, '\n') && size != 0)
	{
		size = read(fd, p, BUFFER_SIZE);
		if (size == -1)
		{
			free(p);
			free(s);
			return (0);
		}
		p[size] = '\0';
		s = ft_strjoin(s, p);
	}
	free(p);
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*s[OPEN_MAX];
	char		*r;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	s[fd] = ft_read_fd(fd, s[fd]);
	if (!s[fd])
		return (NULL);
	r = ft_get_line(s[fd]);
	s[fd] = ft_reste(s[fd]);
	return (r);
}
