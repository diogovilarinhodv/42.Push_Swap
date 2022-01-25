/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_lowest_cost.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:17:01 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:32:35 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	had_cost_a(t_stacks *stack, int a, int b)
{
	if (element_cost_pos_first(stack, (a - 1), b) == 1)
		return (1);
	if (element_cost_pos_min(stack, b) == 1)
		return (1);
	if (element_cost_pos_max(stack, b) == 1)
		return (1);
	return (0);
}

void	element_lowest_cost(t_stacks *stack)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (b < stack->b.qty)
	{
		element_cost_b(stack, b);
		if (had_cost_a(stack, a, b) == 0)
		{
			while (a < stack->a.qty)
			{
				if (element_cost_a(stack, a, b) == 1)
					break ;
				a++;
			}
		}
		element_set_costs(stack, b);
		a = 1;
		b++;
	}
}
