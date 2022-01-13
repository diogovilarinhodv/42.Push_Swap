/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_operation_stack_a.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:12:56 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:17:23 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	operation_stack_a(t_stacks *stack)
{
	int	inc;

	inc = 0;
	while (inc < stack->cost.final_a)
	{
		if (stack->cost.final_a < stack->a.qty / 2)
			ra(stack);
		else if (stack->cost.final_a >= stack->a.qty / 2)
			rra(stack);
		inc++;
	}
}
