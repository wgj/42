/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:27:32 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/05 19:47:27 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void)
{
	int i;
	int asciiOne;
	int asciiNine;
	int lf;

	asciiOne = 48;
	asciiNine = 57;
	lf = 10;
	i = asciiOne;
	while (i<=asciiNine)
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar(lf);
}