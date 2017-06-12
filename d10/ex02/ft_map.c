/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 22:24:47 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/17 22:45:01 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *results;

	results = malloc(sizeof(char) * length);
	i = 0;
	while (i < length)
	{
		results[i] = f(tab[i]);
		i++;
	}
	return (results);
}
