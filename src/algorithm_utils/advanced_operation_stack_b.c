/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_operation_stack_b.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:12:13 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 18:17:17 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	operation_stack_b(t_stacks *stack)
{
	int	inc;

	inc = 0;
	while (inc < stack->cost.final_b)
	{
		if (stack->cost.final_b < stack->b.qty / 2)
			rb(stack);
		else if (stack->cost.final_b >= stack->b.qty / 2)
			rrb(stack);
		inc++;
	}
}
