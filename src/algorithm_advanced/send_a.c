/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:23:04 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/26 11:32:28 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	send_a(t_stacks *stack)
{
	int	inc;

	while (stack->b.qty > 0)
	{
		element_lowest_cost(stack);
		inc = min_to_top_stacks(stack);
		min_to_top_stack_b(stack, inc);
		min_to_top_stack_a(stack, inc);
		pa(stack);
	}
}
