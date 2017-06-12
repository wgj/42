/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:59:35 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/10 15:56:31 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isspace(char c);

int	ft_atoi(char *str)
{
	int result;
	int digit;
	int sign;

	result = 0;

	while (isspace(*str))
	{
		str++;
	}

	if (*str == '-')
	{
		sign = 1;
		str++;
	}
	else
	{
		sign = 0;
		if (*str == '+')
		{
			str++;
		}
	}

	return (0);
}