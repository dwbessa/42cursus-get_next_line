/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:17:54 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/14 15:02:10 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*save_new_line(char *store)
{
	char	*save;

	if (!store)
		return (NULL);
	save = ft_strchr(store, 10) + 1;
	free(store);
	return (save);
}

static char	*actual_line(char *store)
{
	size_t	ret_size;
	char	*ret;

	ret_size = (ft_strlen(store)) - (ft_strlen(ft_strchr(store, 10) + 1)) + 1;
	ret = malloc(ret_size);
	if (!ret)
		return (NULL);
	ret_size = ft_strlcpy(ret, store, ret_size);
	return (ret);
}

static char	*read_line(char *store, int fd)
{
	int		read_len;
	char	*temp;

	read_len = 1;
	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	while (read_len > 0 && !ft_strchr(store, 10))
	{
		read_len = read(fd, temp, BUFFER_SIZE);
		if (read_len < 0)
		{
			free(temp);
			return (NULL);
		}
		temp[read_len] = '\0';
		store = ft_strjoin(store, temp);
	}
	free(temp);
	if (read_len == 0 && store && *store)
		return (store);
	else if (read_len == 0)
		return (NULL);
	return (store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	store = read_line(store, fd);
	if (!store)
		return (NULL);
	ret = actual_line(store);
	store = save_new_line(store);
	return (ret);
}
