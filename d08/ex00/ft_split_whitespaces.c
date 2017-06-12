/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 21:33:17 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/14 10:58:35 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
	{
		return (1);
	}
	return (0);
		
}

int		count_words(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		if (str[i])
	}
}

char	**ft_split_whitespaces(char *str)
{
	// count number of words.
	// malloc char **arr, size of (char *) * count
	//while str
	//if whitespace
	// add 

}