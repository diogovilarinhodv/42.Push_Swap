/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:51:46 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:24:55 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		pa

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (!(stack->b.qty > 0))														return (1)"					-	Checks if stack B has values, if hasnt, returns 1.
		"if (element_add(&stack->a.value, *(stack->b.value), &(stack->a.qty)) == 1) 	error_alloc_mem(stack)"		-	Add element to the top of stack A, if fails, executes error function.
		"if (element_remove(&stack->b.value, &(stack->b.qty)) == 1)						error_alloc_mem(stack)"		-	Remove element of the top of stack B, if fails, executes error function.
		"if (stack->output == 1)														write(1, "pa\n", 4)"		-	Checks if "output" is 1, if it is shows "pa", if not, its because is a double execution.
		"printer_tester(stack)"																						-	Test Funtion.
		
*/

int	pa(t_stacks *stack)
{
	if (!(stack->b.qty > 0))
		return (1);
	element_add(stack, &stack->a.value, *(stack->b.value), &(stack->a.qty));
	element_remove(stack, &stack->b.value, &(stack->b.qty));
	if (stack->output == 1)
		write(1, "pa\n", 3);
	return (0);
}
