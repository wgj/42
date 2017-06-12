/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 18:56:06 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/16 21:05:32 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_row_valid(char square, int row, int col, char **grid)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (grid[row][i] == square && i != col)
			return (0);
		i++;
	}
	return (1);
}

int	is_col_valid(char square, int row, int col, char **grid)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][col] == square && i != row)
			return (0);
		i++;
	}
	return (1);
}

int	get_corner_coord(int coord)
{
	if (coord <= 2)
		return (0);
	if (coord <= 5)
		return (3);
	if (coord <= 8)
		return (6);
	return (0);
}

int	is_box_valid(char square, int row, int col, char **grid)
{
	int corner_row;
	int corner_col;
	int i;
	int j;

	corner_row = get_corner_coord(row);
	corner_col = get_corner_coord(col);
	i = corner_row;
	while (i < corner_row + 3)
	{
		j = corner_col;
		while (j < corner_col + 3)
		{
			if (grid[i][j] == square && i != row && j != col)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
** Is_valid check whether a given square can legally occupy in the vertical,
** horizontal, box units of grid. Returns non-zero if no conflicting peers
** are found, and zero if grid[x][y] doesn't contain '.' (i.e., isn't empty).
*/

int	is_valid(char square, int row, int col, char **grid)
{
	return (is_row_valid(square, row, col, grid) &&
			is_col_valid(square, row, col, grid) &&
			is_box_valid(square, row, col, grid));
}
