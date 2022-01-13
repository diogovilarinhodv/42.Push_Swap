/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:33:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/09 01:47:35 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		element_remove

	Parameters:

		"t_stacks *stacks"	-	Stacks.
		"int **stack"		-	Stack.
		"int *qty"			-	Qty of values in stack.

	Return:

		nothing.

	Info:

		"if (*qty == 1)"									-	Checks if "*qty" is 1.
			"(*qty)--"										-	Decrease "*qty" value.
			"if (*stack != NULL)	free(*stack)"			-	Free allocated memory of stack.
			"*stack = NULL"									-	Set stack to Null.
		"else"
			"(*qty)--"										-	Decrease "*qty" value.
			"stack_alloc(stacks, new_stack, *qty)"			-	Allocate memory to new stack.
			"stack_refill(new_stack, (*stack + 1), *qty)"	-	Fill the new stack.
			"if (*stack != NULL)	free(*stack)"			-	Free allocated memory of stack.
			"*stack = new_stack"							-	Set new stack to variable "*stack".
*/

void	element_remove(t_stacks *stacks, int **stack, int *qty)
{
	int		*new_stack;

	new_stack = NULL;
	if (*qty == 1)
	{
		(*qty)--;
		if (*stack != NULL)
			free(*stack);
		*stack = NULL;
	}
	else if (*qty > 1)
	{
		(*qty)--;
		stack_alloc(stacks, &new_stack, *qty);
		stack_refill(new_stack, (*stack + 1), *qty);
		if (*stack != NULL)
			free(*stack);
		*stack = new_stack;
	}
}
