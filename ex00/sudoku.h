/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 20:15:52 by lkaser            #+#    #+#             */
/*   Updated: 2017/04/16 20:40:01 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H

# define SUDOKU_H

# include <unistd.h>
# include <stdlib.h>

int	is_valid(char square, int row, int col, char **grid);
int	solve(char **grid);

#endif
