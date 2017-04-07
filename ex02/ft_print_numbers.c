/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:27:32 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/06 19:31:19 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_numbers(void)
{
	int i;
	int ascii_one;
	int ascii_nine;
	int lf;

	ascii_one = 48;
	ascii_nine = 57;
	lf = 10;
	i = ascii_one;
	while (i <= ascii_nine)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar(lf);
}
