/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:23:58 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:24:27 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_stack_a(t_stacks *stack)
{
	stack->cost.a = element_pos_min(stack->a.value, stack->a.qty);
	if (stack->cost.a < stack->a.qty / 2)
		stack->cost.reverse_a = 0;
	else
	{
		stack->cost.reverse_a = 1;
		stack->cost.a = stack->a.qty - stack->cost.a;
	}
	min_to_top_stack_a(stack, 0);
}
