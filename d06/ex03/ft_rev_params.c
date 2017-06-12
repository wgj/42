/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 23:13:22 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/12 23:31:41 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	if (argc == 1)
	{
		return (1);
	}
	while (argc > 1)
	{
		while (*argv[argc - 1])
		{
			ft_putchar(*argv[argc - 1]);
			argv[argc - 1]++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
