/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:09:21 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/07 19:09:23 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include<unistd.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *s);
char	*ft_read_fd(int fd, char *s);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_reste(char *s);

#endif
