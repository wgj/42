/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 11:02:24 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/13 15:30:11 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int n)
{
	return (n < 0 ? -n : n);
}

int	*ft_range(int min, int max)
{
	int length;
	int *range;
	int i;

	if (min >= max)
	{
		return (0);
	}
	if (max > 0)
	{
		length = ft_abs(max) - ft_abs(min) - 1;
	}
	else
	{
		length = ft_abs(min) - ft_abs(max) - 1;
	}
	range = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		range[i] = min + i + 1;
		i++;
	}
	return (range);
}
