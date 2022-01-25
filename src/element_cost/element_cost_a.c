/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_cost_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:10:27 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:11:46 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	element_cost_a(t_stacks *stack, int a, int b)
{
	if (*(stack->a.value + a - 1) < *(stack->b.value + b) && *(stack->a.value + a) > *(stack->b.value + b))
	{
		if (stack->a.qty / 2 > a)
		{
			stack->cost.temp_a = a;
			stack->cost.temp_reverse_a = 0;
		}
		else
		{
			stack->cost.temp_a = stack->a.qty - a;
			stack->cost.temp_reverse_a = 1;
		}
		return (1);
	}
	return (0);
}
