/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:46:11 by dbessa            #+#    #+#             */
/*   Updated: 2023/11/16 14:40:02 by vde-vasc         ###   ########.fr       */
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

	fd = open("gnlTester/files/41_no_nl", O_RDWR);
	for (int i = 0; i < 2; i++)
	{
		imprime = get_next_line(fd);
		printf("%s", imprime);
	}
	free(imprime);
	close (fd);
	return (0);
}
