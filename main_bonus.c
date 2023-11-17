/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:25:47 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/17 14:30:38 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <string.h>

int	main(void)
{
	int		fd;
	int		fd1;
	int		fd2;
	char		*imprime;
	
	
	fd = open("lorem.txt", O_RDWR);
	fd1 = open("lorem-invert.txt", O_RDWR);
	fd2 = open("lorem-mussum.txt", O_RDWR);
	imprime = get_next_line(fd);
	printf("%s", imprime);
	imprime = get_next_line(fd1);
	printf("%s", imprime);
	imprime = get_next_line(fd2);
	printf("%s", imprime);
	
	imprime = get_next_line(fd);
	printf("%s", imprime);
	imprime = get_next_line(fd1);
	printf("%s", imprime);
	imprime = get_next_line(fd2);
	printf("%s", imprime);
	free(imprime);
	close (fd);
	return (0);
}
