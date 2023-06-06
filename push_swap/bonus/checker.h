/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstocche <mstocche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:39:41 by mstocche          #+#    #+#             */
/*   Updated: 2023/06/06 12:54:39 by mstocche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "get_next_line.h"

typedef struct s_create
{
	char		**helper;
	int			i;
	int			j;
	int			index;
	t_listlink	*tmp;
}	t_create;

t_listlink	*move_on_first(t_listlink *stack);
void	ft_free1(char **split);
void	delete_list(t_listlink *stack_a);
void	ft_error1(char **helper, t_listlink *stack_a, int flag, int *error);


#endif