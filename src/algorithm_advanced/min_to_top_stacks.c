/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_to_top_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:20:23 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 19:44:12 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	min_to_top_stacks(t_stacks *stack)
{
	int	inc;
	int	inc_of_rotates;

	inc = 0;
	inc_of_rotates = 0;
	while (inc < stack->cost.a && inc < stack->cost.b)
	{
		if (stack->cost.reverse_b == 0 && stack->cost.reverse_a == 0)
		{
			rr(stack);
			inc_of_rotates++;
		}
		else if (stack->cost.reverse_b == 1 && stack->cost.reverse_a == 1)
		{
			rrr(stack);
			inc_of_rotates++;
		}
		inc++;
	}
	return (inc_of_rotates);
}
