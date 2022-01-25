/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:01:13 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 15:56:34 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		ra

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (stack->a.qty > 1)		element_climb(&(stack->a.value), stack->a.qty)"		-	Checks if Stack A has atleast two values, if has, climb the values by one position
		"if (stack->output == 1)	write(1, "ra\n", 4)"								-	Checks if "output" is 1, if it is shows "ra", if not, its because is a double execution.
		"printer_tester(stack)"															-	Test Funtion.
		
*/

int	ra(t_stacks *stack)
{
	if (stack->a.qty > 1)
		element_climb(&(stack->a.value), stack->a.qty);
	if (stack->output == 1)
		write(1, "ra\n", 3);
	//printer_tester(stack);
	return (0);
}
