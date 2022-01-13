/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:11:03 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:14:24 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	cost_set(t_stacks *stack, int b)
{
	if (b == 0)
	{
		stack->cost.final_a = stack->cost.a;
		stack->cost.final_b = stack->cost.b;
	}
	if (stack->cost.a + stack->cost.b < stack->cost.final_a + stack->cost.final_b)
	{
		stack->cost.final_a = stack->cost.a;
		stack->cost.final_b = stack->cost.b;
	}
}
