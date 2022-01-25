/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_cost_pos_min.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:28:34 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:12:03 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_cost_pos_min(t_stacks *stack, int b)
{
	int	pos_min;
	
	pos_min = element_pos_min(stack->a.value, stack->a.qty);
	if (*(stack->a.value + pos_min) > *(stack->b.value + b))
	{
		if (stack->a.qty / 2 > pos_min)
		{
			stack->cost.temp_a = pos_min;
			stack->cost.temp_reverse_a = 0;
		}
		else
		{
			stack->cost.temp_a = stack->a.qty - pos_min;
			stack->cost.temp_reverse_a = 1;
		}
		return (1);
	}
	return (0);
}
