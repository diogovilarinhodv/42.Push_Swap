/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_cost_pos_max.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:10:27 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:13:01 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_cost_pos_max(t_stacks *stack, int b)
{
	int	pos_max;

	pos_max = element_pos_max(stack->a.value, stack->a.qty);
	if (*(stack->a.value + pos_max) < *(stack->b.value + b))
	{
		if (stack->a.qty / 2 > pos_max)
		{
			stack->cost.temp_a = pos_max;
			stack->cost.temp_reverse_a = 0;
		}
		else
		{
			stack->cost.temp_a = stack->a.qty - pos_max;
			stack->cost.temp_reverse_a = 1;
		}
		return (1);
	}
	return (0);
}
