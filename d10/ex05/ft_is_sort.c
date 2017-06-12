/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:28:27 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/17 23:31:58 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int rc;

	i = 0;
	while (i < length - 1)
	{
		rc = f(tab[i], tab[i + 1]);
		if (rc > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
