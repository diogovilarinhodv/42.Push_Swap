/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_operation_reverse_stack_a.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:13:36 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:15:26 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_operation_stack_a(t_stacks *stack)
{
	int	inc;

	inc = 0;
	while (inc < stack->cost.final_a)
	{
		if (stack->cost.final_a < (stack->a.qty - 1) / 2)
			rra(stack);
		else if (stack->cost.final_a >= (stack->a.qty - 1) / 2)
		{
			ra(stack);
			if (stack->cost.final_a == 1)
				ra(stack);
		}
		inc++;
	}
}
