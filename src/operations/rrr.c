/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:57 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 22:25:46 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		rrr

	Parameters:

		"t_stack *stack"		-	Struct stack that contains all data about the stacks.

	Return:

		"int 0"	-	If function executes.
		"int 1"	-	If function doesnt executes.

	Info:

		"stack->output = 0"			-	Set 0 to variable "output" of stack.
		"rra(stack)"                -	Executes rra operation.
		"rrb(stack)"                -	Executes rrb operation.
		"stack->output = 1"			-	Set 1 to variable "output" of stack.
		"write(1, "rrr\n", 5)"		-	Shows "rrr".
		"printer_tester(stack)"		-	Test Funtion.
		
*/

int	rrr(t_stacks *stack)
{
	stack->output = 0;
	rra(stack);
	rrb(stack);
	stack->output = 1;
	write(1, "rrr\n", 4);
	return (0);
}
