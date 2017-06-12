/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 21:49:21 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/07 23:06:14 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	char	*beg;
	char	*end;
	char	swap;

	beg = str;
	end = str;
	i = 0;
	while (i < ft_strlen(str))
	{
		end++;
		i++;
	}
	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		swap = *beg;
		*beg = *end;
		*end = swap;
		beg++;
		end--;
	}
	return (str);
}
