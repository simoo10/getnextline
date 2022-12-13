/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: met-tahe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:10:20 by met-tahe          #+#    #+#             */
/*   Updated: 2022/11/09 15:10:22 by met-tahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include<limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *s);
char	*ft_read_fd(int fd, char *s);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_reste(char *s);

#endif
