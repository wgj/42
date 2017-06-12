/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:23:41 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/26 23:23:43 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "header.h"

char	**makestrings(int *info)
{
	int i;
	char **field;

	i = 0;
	lseek(info[5], info[4] + 1, SEEK_END);
	if (checkvalidmap(info) == 0)
	{
		return (NULL);
		close(info[5]);
	}
	lseek(info[5], (info[4] + 1) * info[0], SEEK_END);
	field = malloc(sizeof(field) * info[0]);
	while (i < info[0])
	{
		field[i] = malloc(info[4] + 1);
		read(info[5], field[i], info[4] + 1);
		i++;
	}
	close(info[5]);
	return (field);
}

void    getinfo(char *av, int *info)
{
	int width;
	char findwidth;

	width = 0;
	findwidth = '0';
	info[5] = open(av, O_WRONLY);
	while (findwidth > 47 && findwidth < 58)
	{
		width = findwidth - 48 + width * 10;
		read(info[5], &findwidth, 1);
	}
	info[0] = width;
	info[1] = findwidth;
	read(info[5], &findwidth, 1);
	info[2] = findwidth;
	read(info[5], &findwidth, 1);
	info[3] = findwidth;
	read(info[5], &findwidth, 1);
	read(info[5], &findwidth, 1);
	width = 0;
	while(findwidth == info[1] || findwidth == info[2])
	{
		read(info[5], &findwidth, 1);
		width++;
	}
	info[4] = width;
}

int    main(int ac, char **av)
{
	int i;
	int *info;
	info = malloc(sizeof(int) * 6);
	i = 1;
	while (i < ac)
	{
		getinfo(av[i], info);
		searchforsquare(makestrings(info), info);
		i++;
		if (i < ac)
			write(1, "\n", 1);
	}
	if (ac == 1)
	{
		stdinpt_info(info);
		searchforsquare(stdinpt_strings(info), info);
	}
	return (0);
}

/*
** info[0] = height, info[1-3] = empty, obs and full char, info[4] = width
** info[5] = fd
*/

