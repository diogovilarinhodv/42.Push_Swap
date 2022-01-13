/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:22:11 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/13 06:31:54 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		sa

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (!(stack->a.qty > 1))	return (1)"				-	Checks if stack A has atleast two values, if hasnt, returns 1.
		"element_swap(stack->a.value, stack->a.value + 1)"	-	Change the two values of the first positions of stack A. 
		"if (stack->output == 1)	write(1, "sa\n", 4)"	-	Checks if "output" is 1, if it is shows "sa", if not, its because is a double execution.
		"printer_tester(stack)"								-	Test Funtion.
		
*/

int	sa(t_stacks *stack)
{
	if (!(stack->a.qty > 1))
		return (1);
	element_swap(stack->a.value, stack->a.value + 1);
	if (stack->output == 1)
		write(1, "sa\n", 3);
	//printer_tester(stack);
	return (0);
}
