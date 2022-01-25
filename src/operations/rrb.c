/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:19 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:34 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		rrb

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (stack->b.qty > 1)		element_fall(&(stack->b.value), stack->b.qty)"		-	Checks if Stack A has atleast two values, if has, fall the values by one position
		"if (stack->output == 1)	write(1, "rrb\n", 5)"								-	Checks if "output" is 1, if it is shows "rrb", if not, its because is a double execution.
		"printer_tester(stack)"															-	Test Funtion.
			
*/

int	rrb(t_stacks *stack)
{
	if (stack->b.qty > 1)
		element_fall(&(stack->b.value), stack->b.qty);
	if (stack->output == 1)
		write(1, "rrb\n", 4);
	//printer_tester(stack);
	return (0);
}
