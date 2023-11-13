/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:17:54 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/13 16:18:39 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
    static char	*bff;
	char		temp[256];
	int		number;
	
	while ((number = read(fd, temp, BUFFER_SIZE)))
	{
		bff[number] = '\0';
		printf("%s\n", bff);
	}
	return (0);
}
