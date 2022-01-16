/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:27:51 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/16 12:25:46 by dpestana         ###   ########.fr       */
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
	int	half_a_qty;
	
	half_a_qty = stack->a.qty / 2;
	while (half_a_qty != 0)
	{	
		stack_alloc(stack, &(stack->sorted_a.value), stack->a.qty);
		stack_refill(stack->sorted_a.value, stack->a.value, stack->a.qty);
		stack_sort(stack->sorted_a.value, stack->a.qty);
		stack_median(stack->sorted_a.value, stack->a.qty, &(stack->sorted_a.median));
		if (*stack->a.value < stack->sorted_a.median)
		{
			pb(stack);
			half_a_qty--;
		}
		else
		{
			ra(stack);
			if (stack->b.qty == 0 && is_sorted_low_to_high(stack->a.value, stack->a.qty) == 1)
				return ;
		}
	}
	sort_low_a(stack);
	sort_low_b(stack);
	while (stack->b.qty != 0)
		pa(stack);
}
