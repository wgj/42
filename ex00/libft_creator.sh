# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjohnson <wjohnson@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/12 19:55:15 by wjohnson          #+#    #+#              #
#    Updated: 2017/04/12 20:06:43 by wjohnson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar cr libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o