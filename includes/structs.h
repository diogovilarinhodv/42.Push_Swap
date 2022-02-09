/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:12:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/09 20:28:21 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_stack
{
	int	*value;
	int	qty;
}	t_stack;

typedef struct s_cost
{
	int	temp_a;
	int	temp_b;
	int	a;
	int	b;
	int	temp_reverse_a;
	int	temp_reverse_b;
	int	reverse_a;
	int	reverse_b;
	int	total;
}	t_cost;

typedef struct s_stacks
{
	t_stack		a;
	t_stack		sorted_a;
	t_stack		b;
	t_cost		cost;
	int			median;
	int			absolute_median;
	int			output;
}	t_stacks;

#endif