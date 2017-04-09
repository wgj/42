/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/08 16:59:43 by wjohnson         ###   ########.fr       */
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
	while (ycounter <= y)
	{
		while (xcounter <= x)
		{
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
			ycounter++ && ft_putchar('\n');
		}
		xcounter++;
	}
	return (0);
}
