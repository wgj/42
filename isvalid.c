/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:23:27 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/26 23:23:35 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

int	checknextsize(int *coor, int size, char **field, int *info)
{
	int i;

	i = 0;
	while(i < size + 1)
	{
		if (coor[0] + size > info[0] || coor[1] + size > info[4])
			return (0);
		if (field[coor[0] + size][coor[1] + size - i] == info[2])
			return (0);
		if (field[coor[0] + size - i][coor[1] + size] == info[2])
			return (0);
		i++;
	}
	return (checknextsize(coor, size + 1, field, info) + 1);
}

int     isvalid(int *coor, int size, char **field, int *info)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(j < size)
	{
		while(i < size)
		{
			if(field[coor[0] + i][coor[1] + j] == info[2])
				return (-i);
		i++;
		}
	i = 0;
	j++;
	}
	return (checknextsize(coor, size, field, info) + 1);
}
