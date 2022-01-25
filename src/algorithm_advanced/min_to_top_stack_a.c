/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:12:56 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:37:11 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	min_to_top_stack_a(t_stacks *stack, int inc)
{
	while (inc < stack->cost.a)
	{
		if (stack->cost.reverse_a == 0)
			ra(stack);
		else if (stack->cost.reverse_a == 1)
			rra(stack);
		inc++;
	}
}
