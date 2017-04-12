/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 13:44:44 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/11 19:50:48 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	while (*str != '\0')
	{
		if (*str != *b)
		{
			str++;
			continue;
		}
		a = str;
		while (*a++ == *b++)
		{
			if (*b == 0)
			{
				return (str);
			}
		}
		b = to_find;
		str++;
	}
	return (char *)(0);
}
