/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 02:29:07 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/08 02:43:32 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int ret;

	i = 1;
	ret = 1;
	while (i <= nb)
	{
		ret *= i;
		i++;
	}
	return (ret);
}
