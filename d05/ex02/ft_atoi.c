/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 22:54:36 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/11 00:10:31 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
	{
		return (1);
	}
	return (0);
}

int		ft_isdigit(int n)
{
	n = n - '0';
	if (n >= 0 && n < 10)
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int result;

	//check for whitespace
	while (ft_isspace(*str))
	{
		str++;
	}
	//check for signed
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
	result = 0;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str)-'0';
		str++;
	}
	if (sign)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}