/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:22:30 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/13 06:30:32 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		rr

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"stack->output = 0"			-	Set 0 to variable "output" of stack.
		"ra(stack)"					-	Executes ra operation.
		"rb(stack)"					-	Executes rb operation.
		"stack->output = 1"			-	Set 1 to variable "output" of stack.
		"write(1, "rr\n", 4)"		-	Shows "rr".
		"printer_tester(stack)"		-	Test Funtion.
		
*/

int	rr(t_stacks *stack)
{
	stack->output = 0;
	ra(stack);
	rb(stack);
	stack->output = 1;
	write(1, "rr\n", 3);
	//printer_tester(stack);
	return (0);
}
