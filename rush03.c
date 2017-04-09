/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/08 23:26:14 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	Remove if function too long.
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

	if (x == 0 || y == 0) // Remove if function too long.
	{
		return (-1);
	}
	xcounter = 0;
	ycounter = 0;
	x--;
	y--;

	//While xcounter !=x && ycounter!=y
	while (!(xcounter == x && ycounter == y))
	{
		if (xcounter == x)
		{
			if (ycounter == y || ycounter == 0) 
			{
				ft_putchar('C');
			}
			// if xcounter == x;
			// putchar '\n', increment y, reset x
			ft_putchar('\n');
			ycounter++;
			xcounter = 0;
		}
	// if tests for a, b, c, ' ', putchar, increment x
		if ((ycounter == 0 && xcounter == 0) || (ycounter == y && xcounter == 0))
		{
			ft_putchar('A');
		}
		if (((ycounter == 0 || ycounter == y) && (xcounter > 0 && xcounter < x)) || \
			((xcounter == 0 || xcounter == x) && ycounter > 0 && ycounter < y))
			{
				ft_putchar('B');
			}
		if(xcounter != 0 && xcounter != x && ycounter != 0 && xcounter != y)
		{
			ft_putchar(' ');
		}

		xcounter++;
	}
 
	return (0);
}
