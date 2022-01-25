/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:12:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:39:17 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

/*
	struct: s_stack

	"int	*value"		-	Value of stack.
	"int	qty"		-	Quantity of stack.
	"int	median"		-	Median of stack values.
*/

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

/*
	struct: s_stack

	"t_stack	stack_a"		-	Stack A.
	"t_stack	stack_b"		-	Stack B.
	"t_stack	stack_sorted"	-	Stack Sorted.
	"int		output"			-	If "0" = Doesnt shows the single operation executed, shows the group operation, in case of "rr", "rrr", "ss".
									If "1" = Shows the single operation executed, in case of "pa", "pb", "ra", "rb", "rra", "rrb", "sa", "sb".
*/

typedef struct s_stacks
{
	t_stack		a;
	t_stack		sorted_a;
	t_stack		b;
	t_cost		cost;
	int			median;
	int			absolute_median;
	int			output;
}
t_stacks;

#endif