/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_cost_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:19:09 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:12:32 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_cost_b(t_stacks *stack, int b)
{
	if (stack->b.qty / 2 > b)
	{
		stack->cost.temp_b = b;
		stack->cost.temp_reverse_b = 0;
	}
	else
	{
		stack->cost.temp_b = stack->b.qty - b;
		stack->cost.temp_reverse_b = 1;
	}
}
