/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:56:34 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 16:05:29 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		sort

	Parameters:

		"t_stacks *stack"		-	Stacks.

	Return:

		nothing.

	Info:

		"if (is_sorted(stack->a.value, stack->a.qty) == 0		||		stack->b.qty > 0)"		-	Checks if Stack A is sorted and if Stack B haves no elements.
			"if (stack->a.qty <= 3)				sort_low(stack)"									-	If stack A haves less than 4 elements, Runs sort_low algorithm.
			"else if (stack->a.qty <= 6)		sort_medium(stack)"									-	If stack A haves less than 7 elements, Runs sort_medium algorithm.

*/

void	sort(t_stacks *stack)
{
	//printer_tester_edges(stack);
	if (is_sorted_low_to_high(stack->a.value, stack->a.qty) == 0 || stack->b.qty > 0)
	{
		if (stack->a.qty <= 3)
			sort_low(stack);
		else if (stack->a.qty <= 6)
			sort_medium(stack);
		else
			sort_advanced(stack);
	}
	//printer_tester_edges(stack);
}
