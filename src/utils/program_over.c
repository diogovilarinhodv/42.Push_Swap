/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program_over.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:02:44 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/13 09:03:08 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		program_over

	Parameters:

		"t_stack *stack"		-	Struct stack that contains the all data about the stacks.
		"int status"			-	0 = Finish with Success.
									1 = Finish with Error.

	Return:

		nothing.

	Info:

		"if (stack != NULL)"																-	Checks if stack exists.
			"if (stack->a.value != NULL) 		free(stack->a.value)"						-	Checks if stack "a" have values, if it has, free the memory allocated.
			"if (stack->b.value != NULL) 		free(stack->b.value)"						-	Checks if stack "b" have values, if it has, free the memory allocated.
			"if (stack->sorted.value != NULL) 	free(stack->sorted.value)"					-	Checks if stack "sorted" have values, if it has, free the memory allocated.
		"if (status == 0) 						write(1, "Finishing program!\n", 20);"		-	Checks if variable "status" is 0, if is, output a normal message.
		"else 									write(1, "Error!\n", 8);"					-	If variable "status" isnt 0, output a error message.
		"exit(status)"																		-	Finish Program.
*/

void	program_over(t_stacks *stack, int status)
{
	if (stack != NULL)
	{
		if (stack->a.value != NULL)
			free(stack->a.value);
		if (stack->b.value != NULL)
			free(stack->b.value);
		if (stack->sorted.value != NULL)
			free(stack->sorted.value);
	}
	//if (status == 0)
	//	write(1, "Finishing program!\n", 19);
	//else
	//	write(1, "Error!\n", 7);
	exit(status);
}
