/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 14:39:44 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 20:41:21 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	get_empty_square(char **grid, int *row, int *col)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (grid[r])
	{
		c = 0;
		while (grid[r][c])
		{
			if (grid[r][c] == '.')
			{
				*row = r;
				*col = c;
				return (1);
			}
			++c;
		}
		++r;
	}
	return (0);
}

int	solve(char **grid)
{
	int row;
	int col;
	int num;

	if	(!get_empty_square(grid, &row, &col))
		return (1);
	num = 1;
	while (num < 10)
	{
		if (is_valid(num, row, col, grid))
		{
			grid[row][col] = num;
			if (solve(grid))
				return (1);
			grid[row][col] = '.';
		}
		++num;
	}
	return (0);
}
