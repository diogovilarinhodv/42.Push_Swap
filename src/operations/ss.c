/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:03 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:25:30 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		ss

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"stack->output = 0"			-	Set 0 to variable "output" of stack.
		"sa(stack)"					-	Executes sa operation.
		"sb(stack)"					-	Executes sb operation.
		"stack->output = 1"			-	Set 1 to variable "output" of stack.
		"write(1, "ss\n", 4)"		-	Shows "ss".
		"printer_tester(stack)"		-	Test Funtion.
		
*/

int	ss(t_stacks *stack)
{
	stack->output = 0;
	sa(stack);
	sb(stack);
	stack->output = 1;
	write(1, "ss\n", 3);
	return (0);
}
