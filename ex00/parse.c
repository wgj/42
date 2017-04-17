/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 17:25:06 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 21:28:07 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		row_len(char *str)
{
	int len;

	len = 0;
	while (*(str++))
		++len;
	return (len);
}

void	print_puzzle(char *str)
{
	while (*str && *(str + 1))
	{
		write(1, str, 1);
		write(1, " ", 1);
		++str;
	}
	write(1, str, 1);
	write(1, "\n", 1);
}

int		validate_grid(char **grid)
{
	int		row;
	int		col;
	char	square;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			square = grid[row][col];
			if (square != '.')
			{
				if (square < '0' || square > '9')
					return (0);
				if (!is_valid(square, row, col, grid))
					return (0);
			}
			++col;
		}
		++row;
	}
	return (1);
}

char	**parse_arguments(int argc, char **argv)
{
	int		char_count;
	char	**grid;

	if (argc != 10)
		return (NULL);
	char_count = 0;
	while (--argc > 0)
		char_count += row_len(argv[argc]);
	if (char_count != 81)
		return (NULL);
	++argv;
	grid = malloc(sizeof(char*) * 10);
	argc = -1;
	while (++argc < 9)
		grid[argc] = argv[argc];
	grid[9] = 0;
	if (!validate_grid(grid))
		return (NULL);
	return (grid);
}

int		main(int argc, char **argv)
{
	char **grid;

	grid = parse_arguments(argc, argv);
	if (grid == NULL)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	solve(grid);
	while (*grid)
	{
		print_puzzle(*grid);
		++grid;
	}
	return (0);
}
