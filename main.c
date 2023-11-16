/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:46:11 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/14 16:33:37 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <string.h>

int	main()
{
	int	fd;
	char *imprime;

	fd = open("lorem.txt", O_RDWR);
	imprime = get_next_line(fd);
	printf("%s", imprime);
	free(imprime);
	close (fd);
	return (0);
}