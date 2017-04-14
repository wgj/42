/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:48:47 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/13 20:11:39 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_meridian(int h)
{
	if (h == 25)
		return ('A');
	if (h > 24)
		h -= 12;
	if (h >= 1 && h <= 11)
		return ('A');
	if (h >= 12 && h <= 23)
		return ('P');
	return ('A');
}

int		ft_hour(int h)
{
	if (h >= 13 && h <= 24)
		return (h -= 12);
	if (h == 25)
		return (1);
	return (h);
}

void	ft_takes_place(int hour)
{
	int		h1;
	int		h2;
	char	m1;
	char	m2;

	m1 = ft_meridian(hour);
	m2 = ft_meridian(hour + 1);
	h1 = ft_hour(hour);
	h2 = ft_hour(hour + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d:00 %c.M. AND %d:00 %c.M.\n", h1, m1, h2, m2);
}
