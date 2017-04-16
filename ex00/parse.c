/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 17:25:06 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 14:37:50 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		len(char *str)
{
	int len;

	len = 0;
	while (*(str++))
		++len;
	return (len);
}

int		is_valid(char **grid)
{
	(void)grid;
	return (1);
}

char	**parse_arguments(int argc, char **argv)
{
	int char_count;
	char **grid;

	if (argc != 10)
		return (NULL);
	char_count = 0;
	while (--argc > 0)
		char_count += len(argv[argc]);
	if (char_count != 81)
		return (NULL);

	++argv;
	grid = malloc(sizeof(char*) * 10);
	argc = -1;
	while (++argc < 9)
		grid[argc] = argv[argc];
	grid[9] = 0;
	if (!is_valid(grid))
		return (NULL);
	return (grid);
}

int		main(int argc, char **argv)
{
	char **grid;

	grid = parse_arguments(argc, argv);
	if (grid == NULL)
		write(1, "Error\n", 6);
	while (*grid)
	{
		write(1, *grid, 9);
		write(1, "\n", 1);
		++grid;
	}
	return (0);
}
