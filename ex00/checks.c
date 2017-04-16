/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 18:56:06 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/16 02:37:03 by acen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_vunit_valid(char square, int row, int col, char **grid)
{
	int i;
	char peer;

	i = 0;
	// for every peer in grid[x][i]
	while (i < 9)
	{
		peer = grid[row][i];
		i++;
		// if grid[x][y] is not '.', return 0;
		if (peer != '.')
		{
			return (0);
		}
		// if peer is == square, return 0;
		if (peer == square)
		{
			return (0);
		}
		// if peer is > '9'+1 or < '0'-1, return 0;
		if (peer > '9' + 1 || peer < '0' - 1)
		{
			return (0);
		}
		// if peer is '.', (do nothing? don't check?, wanted to `continue`, but doesn't make sense in `while`'s need to increment.)
	}
	return (1);
}

int	is_hunit_valid(char square, int row, int col, char **grid)
{
	// i am guessing the row, col is the current coordinate of square?
	int i;
	char peer;

	i = 0;
	while (i < 9)
	{
		peer = grid[i][col];
		if (peer < '0' || peer > '9')
			return (0); //this should probably return an exit error
		if (square == peer)
			return (0);
		//why do we return false if peer is not empty? we should probably just ignore it?
		i++;
	}
	return (1);
}
int	is_bunit_valid(char square, int row, int col, char **grid)
{
	int corner_row;
	int corner_col;

	corner_row = 0;
	corner_col = 0; //i can probably move this to a diff function...
	if (row <= 2)
		corner_row = 0;
	if (row <= 5)
		corner_row = 3;
	if (row <= 8)
		corner_row = 6;
	if (col <= 2)
		corner_col = 0;
	if (col <= 5)
		corner_col = 3;
	if (col <= 8)
		corner_col = 6;

	int i;
	int j;

	i = corner_row;
	j = corner_col;

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
	// TODO check that row and rol are valid input.
	// TODO check that square is valid input.
	// TODO figure out a way to figure is a valid input.
	return (is_vunit_valid(square, row, col, grid) && is_hunit_valid(square, row, col, grid) && is_bunit_valid(square, row, col, grid));
}
