/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_set_costs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:11:03 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:11:25 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_set_costs(t_stacks *stack, int b)
{
	if (b == 0 || stack->cost.temp_a + stack->cost.temp_b < stack->cost.a + stack->cost.b)
	{
		stack->cost.a = stack->cost.temp_a;
		stack->cost.b = stack->cost.temp_b;
		stack->cost.total = stack->cost.a + stack->cost.b;
		stack->cost.reverse_a = stack->cost.temp_reverse_a;
		stack->cost.reverse_b = stack->cost.temp_reverse_b;
	}
}
