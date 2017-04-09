/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/08 19:00:22 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		rush(5,3) should display:
**		$>./a.out
**		ABBBC
**		B   B
**		ABBBC
*/

int	ft_putchar(char c);

int	rush(int x, int y)
{
	int		xcounter;
	int		ycounter;
	char	c;

	if (x == 0 || y == 0)
	{
		return (-1);
	}
	xcounter = 0;
	ycounter = 0;

	//While xcounter !=x && ycounter!=y
	// if xcounter == x;
	// putchar '\n', increment y, reset x
	// if tests for a, b, c, ' ', putchar, increment x

	//These tests look good.
	// need b test.
	// need ' ' test.
			if ((xcounter == 0 && ycounter == y) || \
				(xcounter == 0 && ycounter == 0))
			{
				c = 'A';
				ft_putchar(c);
			}
			if ((xcounter == x && ycounter == 0) || \
				(xcounter == x && ycounter == y))
			{
				c = 'C';
				ft_putchar(c);
			}
			ft_putchar('\n');
			ycounter++;
	return (0);
}
