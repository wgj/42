/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 14:39:44 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 22:03:13 by wjohnson         ###   ########.fr       */
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
	int		row;
	int		col;
	char	num;

	if (!get_empty_square(grid, &row, &col))
		return (1);
	num = '1';
	while (num <= '9')
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

int	grid_compare(char **grid1, char **grid2)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			if (grid1[row][col] - grid2[row][col])
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}
