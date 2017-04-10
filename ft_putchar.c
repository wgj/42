/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 15:13:04 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/09 16:49:07 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	char	buf[2];
	int		size;

	buf[0] = c;
	buf[1] = '\0';
	size = write(1, buf, 1);
	if (size == 1)
	{
		return (c);
	}
	else
	{
		return (-1);
	}
}
