/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:23:09 by wjohnson          #+#    #+#             */
/*   Updated: 2017/04/26 23:37:05 by wjohnson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	findnext(int *coor, int *info, int size, int n);
void	searchforsquare(char **field, int *info);
char	**makestrings(int *info);
void	getinfo(char *av, int *info);
int		checknextsize(int *coor, int size, char **field, int *info);
int		isvalid(int *coor, int size, char **field, int *info);
void	printresult(char **field, int size, int *bestcoor, int *info);
int		checkvalidmap(int *info);
char	**stdinpt_strings(int *info);
void	stdinpt_info(int *info);
#endif
