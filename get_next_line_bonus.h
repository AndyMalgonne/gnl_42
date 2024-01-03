/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacket <jacket@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:45:06 by jacket            #+#    #+#             */
/*   Updated: 2024/01/03 15:11:20 by jacket           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* Libraries */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/* Functions */

char	*get_next_line(int fd);
size_t	ft_strlen (const char *s);
char	*ft_strdup(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 6
#endif