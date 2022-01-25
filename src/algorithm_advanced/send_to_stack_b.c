/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:28:41 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/23 12:26:51 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	send_to_stack_b(t_stacks *stack)
{
	while (stack->a.qty > 3)
	{
		stack_alloc(stack, &(stack->sorted_a.value), stack->a.qty);
		stack_refill(stack->sorted_a.value, stack->a.value, stack->a.qty);
		stack_sort(stack->sorted_a.value, stack->a.qty);
		stack_median(stack->sorted_a.value, stack->a.qty, &(stack->median));
		if (*stack->a.value <= stack->median)
		{
			pb(stack);
			sort_stack_b(stack);
		}
		else
			ra(stack);
	}
}
