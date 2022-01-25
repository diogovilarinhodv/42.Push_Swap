/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:27:51 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:39:17 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		sort_medium

	Parameters:

		"t_stacks *stack"		-	Stacks.

	Return:

		nothing.

	Info:

		""				-	.
		""				-	.
		""				-	.

*/

void	sort_medium(t_stacks *stack)
{
	while (is_sorted_low_to_high(stack->a.value, stack->a.qty) == 0)
	{
		while (stack->a.qty > 3)
		{
			stack->cost.a = element_pos_min(stack->a.value, stack->a.qty);
			min_to_top_stack_a(stack, 0);
			if (is_sorted_low_to_high(stack->a.value, stack->a.qty) == 1)
				break ;
			if (*(stack->a.value) > *(stack->a.value + 1))
				sa(stack);
			else
				pb(stack);
		}
		if (stack->a.qty == 3)
			sort_low(stack);
		while (stack->b.qty != 0)
			pa(stack);
	}
}
