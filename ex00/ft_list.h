/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 13:54:18 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/18 13:59:42 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct          s_list
{
    struct s_list       *next;
    void                *data;
}   t_list;