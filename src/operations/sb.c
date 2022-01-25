/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:16 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:25:35 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		sb

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (!(stack->b.qty > 1))	return (1)"				-	Checks if stack B has atleast two values, if hasnt, returns 1.
		"element_swap(stack->b.value, stack->b.value + 1)"	-	Change the two values of the first positions of stack B. 
		"if (stack->output == 1)	write(1, "sb\n", 4)"	-	Checks if "output" is 1, if it is shows "sb", if not, its because is a double execution.
		"printer_tester(stack)"								-	Test Funtion.
		
*/

int	sb(t_stacks *stack)
{
	if (!(stack->b.qty > 1))
		return (1);
	element_swap(stack->b.value, stack->b.value + 1);
	if (stack->output == 1)
		write(1, "sb\n", 3);
	return (0);
}
