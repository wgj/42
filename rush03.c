/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 14:46:10 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/09 15:25:30 by wjohnson         ###   ########.fr       */
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

void print(void) {
	ft_putchar('x');
}

int	rush(int x, int y)
{
	int		xpos;
	int		ypos;

	if (x == 0 || y == 0) // Remove if function too long.
	{
		return (-1);
	}
	xpos = 1;
	ypos = 1;

	// iterate through ypos
	while (ypos < y)
	{
	// iterate thoough xposes
		while (xpos <= x)
		{
			print();
			xpos++;
		}
		ft_putchar('\n'); //Replace with print()
		xpos = 1;
		ypos++;
	}
	return (0);
}
