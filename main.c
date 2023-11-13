/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:46:11 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/13 16:41:14 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <string.h>

int	main()
{
	int	fd;
	static char *fica_aqui;
	char buf[257];
	int	chars_read;

	fd = open("text.txt", O_RDONLY);
	while ((chars_read = read(fd, buf, BUFFER_SIZE)))
	{
		buf[chars_read] = '\0';
		if (strchr(buf, '\n'))
			printf("linha -> %s\n", buf)
		printf("linha -> %s\n", buf);
	}
	close(fd);
}
