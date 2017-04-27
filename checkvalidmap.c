/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkvalidmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:22:56 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/26 23:22:57 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkvalidmap(int *info)
{
	char test;
	int i;
	int counter;
	int linecount;

	i = 0;
	linecount = 0;
	counter = 0;
	while (i < (info[4] + 1) * info[0])
	{
		read(info[5], &test, 1);
		if (test == info[2] || test == info[1])
			counter++;
		if (test == '\n')
			linecount++;
		i++;
	}
	if ((read(info[5], &test, 1) == 1))
		return (0);
	if (counter == info[4] * info[0] && linecount == info[0])
		return (1);
	return (0);
}
