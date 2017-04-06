/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:06:32 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/05 19:06:34 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	int a;
	int z;
	int lf;
	int i;

	a = 97;
	z = 122;
	lf = 10;
	i = a;
	while (i <= z)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar(lf);
}
