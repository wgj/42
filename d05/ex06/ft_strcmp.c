/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 19:53:16 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/11 20:04:43 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	if (*s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
