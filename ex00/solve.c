/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 14:39:44 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 14:49:00 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_empty_square(char **grid, int *row, int *col)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (grid[r])
	{
		c = 0;
		while(grid[r][c])
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
