/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 17:25:06 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/15 21:43:15 by lkaser           ###   ########.fr       */
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

char	**parse_arguments(int argc, char **argv)
{
	short int char_count;

	if (argc != 10)
		return (NULL);
	char_count = 0;
	while (--argc > 0)
		char_count += len(argv[argc]);
	if (char_count != 81)
		return (NULL);
	return (++argv);
}

int		main(int argc, char **argv)
{
	char **grid;

	grid = parse_arguments(argc, argv);
	if (grid == NULL)
		write(1, "Error\n", 6);
	return (0);
}
