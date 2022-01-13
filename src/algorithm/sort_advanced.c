/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_advanced.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 03:54:38 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:22:13 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	get_index_of_lower_cost(t_stacks *stack)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (b < stack->b.qty)
	{
		while (a < stack->a.qty)
		{
			if (cost_element(stack, a, b) == 1)
				break;
			cost_last_element(stack, a, b);
			a++;
		}
		cost_set(stack, b);
		b++;
	}
}

void	sort_advanced(t_stacks *stack)
{
	while (stack->a.qty > 3)
	{	
		stack_alloc(stack, &(stack->sorted_a.value), stack->a.qty);
		stack_refill(stack->sorted_a.value, stack->a.value, stack->a.qty);
		stack_sort(stack->sorted_a.value, stack->a.qty);
		stack_median(stack->sorted_a.value, stack->a.qty, &(stack->sorted_a.median));
		if (*stack->a.value < stack->sorted_a.median)
		{
			pb(stack);
			if (*stack->b.value < stack->sorted.median && stack->b.qty > 1)
				rb(stack);
		}
		else
		{
			ra(stack);
			if (stack->b.qty == 0 && is_sorted_low_to_high(stack->a.value, stack->a.qty) == 1)
				return ;
		}
	}
	sort_low_a(stack);
	while (stack->b.qty != 0)
	{
		get_index_of_lower_cost(stack);
		operation_stack_b(stack);
		operation_stack_a(stack);
		pa(stack);
		reverse_operation_stack_a(stack);
	}
}