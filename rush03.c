/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/09 17:07:21 by wjohnson         ###   ########.fr       */
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
	char	top;
	char	left;
	char	center;
	char	right;
	char	bottom;
	char	top_left_corner;
	char	top_right_corner;
	char	bottom_left_corner;
	char	bottom_right_corner;

	top = 'B';
	left = 'B';
	center = ' ';
	right = 'B';
	bottom = 'B';
	top_left_corner = 'A';
	top_right_corner = 'C';
	bottom_left_corner = 'A';
	bottom_right_corner = 'C';
	if ((xpos > 1 && xpos < x) && ypos == 1)
	{
		c = top;
	}
	if (xpos == 1 && (ypos > 1 && ypos < y))
	{
		c = left;
	}
	if ((xpos > 1 && xpos < x) && (ypos > 1 && ypos < y))
	{
		c = center;
	}
	if (xpos == x && (ypos > 1 && ypos < y))
	{
		c = left;
	}
	if ((xpos > 1 && xpos < x) && ypos == y)
	{
		c = bottom;
	}
	if (xpos == 1 && ypos == 1)
	{
		c = top_left_corner;
	}
	if (x > 1 && (xpos == x && ypos == 1))
	{
		c = top_right_corner;
	}
	if (xpos == 1 && ypos == y)
	{
		c = bottom_left_corner;
	}
	if (x > 1 && (xpos == x && ypos == y))
	{
		c = bottom_right_corner;
	}
	if (xpos > x)
	{
		c = '\n';
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

	if (x == 0 || y == 0)
	{
		return (-1);
	}
	xpos = 1;
	ypos = 1;
	while (ypos <= y)
	{
		while (xpos <= x)
		{
			print(xpos, ypos, x, y);
			xpos++;
		}
		print(xpos, ypos, x, y);
		xpos = 1;
		ypos++;
	}
	return (0);
}
