/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabel <lfabel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 08:51:26 by lfabel            #+#    #+#             */
/*   Updated: 2024/07/15 13:14:05 by lfabel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(char *s);

char	*ft_strndup(char *input, size_t n);

char	*ft_strchr(const char *s, int c);

char	*get_next_line(int fd);

char	*ft_strnjoin(char *s1, char *s2, size_t n);

void	*ft_memmove(void *des, const void *src, size_t num);

char	*position(char *pos, char *line, char *buf);

char	*zwei(char *line, char *buf);

char	*freigabe(char *line);

char	*buffer_check(char *buf);

#endif