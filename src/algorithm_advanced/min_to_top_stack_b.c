/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:12:13 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:37:29 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	min_to_top_stack_b(t_stacks *stack, int inc)
{
	while (inc < stack->cost.b)
	{
		if (stack->cost.reverse_b == 0)
			rb(stack);
		else if (stack->cost.reverse_b == 1)
			rrb(stack);
		inc++;
	}
}
