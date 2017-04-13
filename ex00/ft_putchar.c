/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:52:21 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/12 16:54:44 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	int		stdout;
	size_t	size;

	stdout = 1;
	size = sizeof(c);
	write(stdout, &c, size);
}
