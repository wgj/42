/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 10:44:46 by wes               #+#    #+#             */
/*   Updated: 2017/04/11 13:36:21 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest = *src;
		if (*src == '\0')
		{
			while (i < n)
			{
				*dest = '\0';
				i++;
				dest++;
			}
		}
		dest++;
		src++;
	}
	return (dest);
}
