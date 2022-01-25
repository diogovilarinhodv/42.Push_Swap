/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:29:07 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/23 12:41:45 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_stack_b(t_stacks *stack)
{
	int	min_pos;

	if (stack->b.qty > 1)
	{
		min_pos = element_pos_min(stack->b.value, stack->b.qty);
		if (*stack->b.value < *(stack->b.value + min_pos))
			rb(stack);
		else if (*stack->b.value < stack->absolute_median)
			rb(stack);
	}
}
