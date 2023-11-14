/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:19:01 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/14 15:26:01 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE    10
# endif

char			*get_next_line(int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
// static char		*save_new_line(char *store);
// static char		*actual_line(char *store);
// static char		*read_line(char *store, int fd);
#endif