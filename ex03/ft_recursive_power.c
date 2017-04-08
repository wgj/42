/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 03:08:16 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/08 03:11:58 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
	{
		return (nb);
	}
	if (power == 0)
	{
		return (1);
	}
	return (ft_recursive_power(nb, power - 1) * nb);
}
