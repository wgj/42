/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:14:22 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/06 19:31:06 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_reverse_alphabet(void)
{
	int a;
	int z;
	int lf;
	int i;

	a = 97;
	z = 122;
	lf = 10;
	i = z;
	while (i >= a)
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar(lf);
}
