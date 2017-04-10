/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/09 18:10:44 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		rush(5,3) should display:
**		$>./a.out
**		ABBBC
**		B   B
**		ABBBC
*/

int		ft_putchar(char c);

/*
** Print() prints elements of Rush()'s array,
** and contains the logic for the look of the array.
*/

void	print(int xpos, int ypos, int x, int y)
{
	char	c;
	char	wall;
	char	left_corner;
	char	right_corner;

	c = ' ';
	wall = 'B';
	left_corner = 'A';
	right_corner = 'C';
	if (((xpos > 1 && xpos < x) && ypos == 1) || \
		(xpos == 1 && (ypos > 1 && ypos < y)) || \
		(xpos == x && (ypos > 1 && ypos < y)) || \
		((xpos > 1 && xpos < x) && ypos == y))
	{
		c = wall;
	}
	if ((xpos == 1 && ypos == 1) || (xpos == 1 && ypos == y))
	{
		c = left_corner;
	}
	if ((x > 1 && ((xpos == x && ypos == 1) || (xpos == x && ypos == y))))
	{
		c = right_corner;
	}
	ft_putchar(c);
}

/*
** Rush() will loop through an array of x by y,
** calling print() at every position.
*/

int		rush(int x, int y)
{
	int		xpos;
	int		ypos;

	xpos = 1;
	ypos = 1;
	while (ypos <= y)
	{
		while (xpos <= x)
		{
			print(xpos, ypos, x, y);
			xpos++;
		}
		if (xpos > x)
		{
			ft_putchar('\n');
		}
		else
		{
			print(xpos, ypos, x, y);
		}
		xpos = 1;
		ypos++;
	}
	return (0);
}
