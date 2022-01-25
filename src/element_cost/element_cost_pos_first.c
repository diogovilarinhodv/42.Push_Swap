/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_cost_pos_first.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:27:01 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:12:45 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_cost_pos_first(t_stacks *stack, int a, int b)
{
	if (*(stack->a.value + a) > *(stack->b.value + b) && *(stack->a.value + stack->a.qty - 1) < *(stack->b.value + b))
	{
		stack->cost.temp_a = 0;
		stack->cost.temp_reverse_a = 0;
		return (1);
	}
	return (0);
}
