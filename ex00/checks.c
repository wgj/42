/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 18:56:06 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/16 16:48:31 by wjohnson         ###   ########.fr       */
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
		// if grid[x][y] is not '.', return 0;
		// if peer is == square, return 0;
		if (peer == square)
		{
			return (0);
		}
		// if peer is > '9'+1 or < '0'-1, return 0;
		if (peer > '9' || peer < '0')
		{
			return (0);
		}
		// if peer is '.', (do nothing? don't check?, wanted to `continue`, but doesn't make sense in `while`'s need to increment.)
		i++;
	}
	return (1);
}

int	is_hunit_valid(char square, int row, int col, char **grid) 
{
	// i am guessing the row, col is the current coordinate of square?
	// It's the current coordinate of a "potential" square. If the tests pass, then it's safe to put `char square` into `grid[x][y]`. -wgj
	int i;
	char peer;

	i = 0;
	while (i < 9)
	{
		peer = grid[i][col];
		if (peer < '0' || peer > '9')
			return (0); //this should probably return an exit error
						// Agreed, but I think that's up to the context of the caller of  is_valid(). -wgj
		if (square == peer)
			return (0);
		//why do we return false if peer is not empty? we should probably just ignore it?
		// Well, it depends if is_valid() is to check for a potential square, or an existing square. Let's talk about it together. -wgj
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
	if (row <= 2) // I think corner_row and corner_col are creating a box around grid[row][col], instead of defining the box grid[x][y] is in (I could be wrong). Let's talk about it -wrong :)
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
			if (grid[i][j] == square) // In the above functions, I was making the presumption that grid[row][col] will be empty, so it's safe to check. This is another example where we need to figure out if our checks should be "before writing a sqaure" or "after writing a square". -wgj
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
	if (grid[row][col] != '.')
		return (0);
	// TODO check that row and rol are valid input. Though maybe this should be done on parse?
		if (!(square >= '0' && square <= '9'))
			return (0);
	// TODO figure out a way to see grid a valid input.
	// TODO add function declaration to sudoku.h
	// TODO add precheck that grid[row][col] is empty, return false.
	return (is_vunit_valid(square, row, col, grid) && is_hunit_valid(square, row, col, grid) && is_bunit_valid(square, row, col, grid));
}
