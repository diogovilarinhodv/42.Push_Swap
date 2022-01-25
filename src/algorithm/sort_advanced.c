/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advanced.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:54:38 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 16:06:33 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_advanced(t_stacks *stack)
{
	int	inc;
	
	send_b(stack);
	sort_low(stack);
	while (stack->b.qty > 0)
	{
		element_lowest_cost(stack);
		inc = min_to_top_stacks(stack);
		min_to_top_stack_b(stack, inc);
		min_to_top_stack_a(stack, inc);
		pa(stack);
	}
	inc = 0;
	stack->cost.a = element_pos_min(stack->a.value, stack->a.qty);
	if (stack->cost.a < stack->a.qty / 2)
		stack->cost.reverse_a = 0;
	else
	{
		stack->cost.reverse_a = 1;
		stack->cost.a = stack->a.qty - stack->cost.a;
	}
	min_to_top_stack_a(stack, inc);
}
