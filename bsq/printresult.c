/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printresult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:23:31 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/26 23:23:32 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"

void	printresult(char **field, int size, int *bestcoor, int *info)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			field[bestcoor[0] + j][bestcoor[1] + i] = info[3];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < info[0])
	{
		write(1, field[i], info[4] + 1);
		free(field[i]);
		i++;
	}
}
