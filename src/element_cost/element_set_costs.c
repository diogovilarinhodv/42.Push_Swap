/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_set_costs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:11:03 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/09 20:27:29 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_set_costs(t_stacks *stack, int b)
{
	int	cost_a;
	int	cost_b;

	cost_a = stack->cost.temp_a;
	cost_b = stack->cost.temp_b;
	if (b == 0
		|| cost_a + cost_b < stack->cost.a + stack->cost.b)
	{
		stack->cost.a = cost_a;
		stack->cost.b = cost_b;
		stack->cost.total = stack->cost.a + stack->cost.b;
		stack->cost.reverse_a = stack->cost.temp_reverse_a;
		stack->cost.reverse_b = stack->cost.temp_reverse_b;
	}
}
