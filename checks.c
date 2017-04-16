/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 18:56:06 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/15 19:03:41 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_vunit_valid(char square, int row, int col, char **grid)
{
	(void)square;
	(void)row;
	(void)col;
	(void)grid;
	// for every peer in grid[x][i]
	// if grid[x][y] is not '0', return 0;
	// if peer is '0', (do nothing? don't check?, wanted to `continue`, but doesn't make sense in `while`'s need to increment.)
	// if peer is == square, return 0;
	// if peer is > '9'+1 or < '0'-1, return 0;
	return (1);
}

int	is_hunit_valid(char square, int row, int col, char **grid)
{
	(void)square;
	(void)row;
	(void)col;
	(void)grid;
	return (0);
}
int	is_bunit_valid(char square, int row, int col, char **grid)
{
	(void)square;
	(void)row;
	(void)col;
	(void)grid;
	return (0);
}

/*
** Is_valid check whether a given square can legally occupy in the vertical,
** horizontal, box units of grid. Returns non-zero if no conflicting peers
** are found, and zero if grid[x][y] doesn't contain '0' (i.e., isn't empty).
*/
int	is_valid(char square, int row, int col, char **grid)
{
	// TODO check that row and rol are valid input.
	// TODO check that square is valid input.
	// TODO figure out a way to figure is a valid input.
	return (is_vunit_valid(square, row, col, grid) && is_hunit_valid(square, row, col, grid) && is_bunit_valid(square, row, col, grid));
}
