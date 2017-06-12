/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 22:24:20 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/12 22:48:58 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	(void)argc;
	while (*argv[0])
	{
		ft_putchar(*argv[0]++);
	}
	ft_putchar('\n');
}
