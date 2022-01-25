/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:11 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:27:01 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		rra

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"if (stack->a.qty > 1)		element_fall(&(stack->a.value), stack->a.qty)"	-	Checks if Stack A has atleast two values, if has, fall the values by one position
		"if (stack->output == 1)	write(1, "rra\n", 5)"							-	Checks if "output" is 1, if it is shows "rra", if not, its because is a double execution.
		"printer_tester(stack)"														-	Test Funtion.
		
*/

int	rra(t_stacks *stack)
{
	if (stack->a.qty > 1)
		element_fall(&(stack->a.value), stack->a.qty);
	if (stack->output == 1)
		write(1, "rra\n", 4);
	return (0);
}
